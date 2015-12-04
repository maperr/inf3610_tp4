# 1 "comms/matrix_mul.cpp"
# 1 "<command-line>"
# 1 "comms/matrix_mul.cpp"







# 1 "C:/Users/gabil/Documents/inf3610_tp4/Calculator/src/module/matrix_mul.h" 1
# 11 "C:/Users/gabil/Documents/inf3610_tp4/Calculator/src/module/matrix_mul.h"
# 1 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceStudio/src/main/resources/a/ck/headers/hw/SpaceBaseModule.h" 1



# 1 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceLib/release/hw/include/SpaceTypes.h" 1
# 22 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceLib/release/hw/include/SpaceTypes.h"
static const unsigned char SPACE_OK = 0;
static const unsigned char SPACE_ERROR = 1;
static const unsigned char SPACE_EMPTY = 2;
static const unsigned char SPACE_FULL = 3;
static const unsigned char SPACE_NOT_CONNECTED = 99;

typedef unsigned char eSpaceStatus;







typedef enum
{

 SPACE_CHANNEL_OK = 0,
 SPACE_CHANNEL_FULL = 1,
 SPACE_CHANNEL_EMPTY = 2,
 SPACE_CHANNEL_UNUSED_STATUS_1 = 3,

 SPACE_CHANNEL_UNUSED_STATUS_2 = 4,
    SPACE_CHANNEL_ADDR_OUT_OF_RANGE = 5,

 SPACE_CHANNEL_ERROR = 6,

 SPACE_CHANNEL_TERMINATOR_ACCESS = 7,


    SPACE_CHANNEL_MSG_SIZE_ERROR = 8,
    SPACE_CHANNEL_NO_QUEUE_AVAILABLE = 9,
 SPACE_CHANNEL_UNUSED_STATUS_4 = 10,


 SPACE_CHANNEL_IN_PROGRESS = 11,




 SPACE_UNKNOWN_DESTINATION = 12,
 SPACE_INVALID_OFFSET = 13


} eSpaceChannelStatus;
# 75 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceLib/release/hw/include/SpaceTypes.h"
static const unsigned long SPACE_NON_BLOCKING = 0;
static const unsigned long SPACE_NO_WAIT = 0;
static const unsigned long SPACE_BLOCKING = 0xFFFFFFFF;
static const unsigned long SPACE_WAIT_FOREVER = 0xFFFFFFFF;

typedef unsigned long eSpaceTransactionType;
# 89 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceLib/release/hw/include/SpaceTypes.h"
typedef enum
{
    SPACE_UNREGISTERED = 0,
    SPACE_MODULE = 1,
    SPACE_DEVICE = 2,

 SPACE_ISS_ADAPTER = 4,
 SPACE_REGISTER_FILE = 5,
 SPACE_SLAVE_BRIDGE = 6
} eSpaceComponentType;







typedef enum
{
 SPACE_MODULE_READ = 0,
 SPACE_MODULE_WRITE = 1,
 SPACE_DEVICE_READ = 2,
 SPACE_DEVICE_WRITE = 3,
 SPACE_REGISTER_READ = 4,
 SPACE_REGISTER_WRITE = 5,
 SPACE_UNKNOWN_COMMUNICATION = 0xFF
} eSpaceCommunicationType;
# 5 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceStudio/src/main/resources/a/ck/headers/hw/SpaceBaseModule.h" 2

# 1 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceStudio/src/main/resources/a/ck/headers/hw/systemc" 1




namespace sc_core {
}


namespace sc_dt {
}

namespace tlm {
 class tlm_target_socket;
 class tlm_generic_payload;
 class tlm_dmi;
 class tlm_sync_enum;
 class tlm_phase;
  class tlm_initiator_socket;
}
# 7 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceStudio/src/main/resources/a/ck/headers/hw/SpaceBaseModule.h" 2

class SpaceBaseModule;
# 12 "C:/Users/gabil/Documents/inf3610_tp4/Calculator/src/module/matrix_mul.h" 2

# 1 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceStudio/src/main/resources/a/ck/headers/hw/systemc" 1
# 14 "C:/Users/gabil/Documents/inf3610_tp4/Calculator/src/module/matrix_mul.h" 2

class matrix_mul: public SpaceBaseModule {
 public:
     SC_HAS_PROCESS(matrix_mul);
  matrix_mul(sc_core::sc_module_name name, double period, sc_core::sc_time_unit unit, unsigned char id, unsigned char priority, bool verbose);
     void thread(void);

 private:
     void readOperand();
  void sendResult();
  void multiplyMat();

  unsigned int *m_result;
  unsigned int *m_operand1;
  unsigned int *m_operand2;
};
# 9 "comms/matrix_mul.cpp" 2

# 1 "temp/PlatformDefinitions.h" 1
# 11 "comms/matrix_mul.cpp" 2
# 1 "C:/Users/gabil/Documents/inf3610_tp4/Calculator/src/application/ApplicationDefinitions.h" 1
# 12 "comms/matrix_mul.cpp" 2
# 1 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceStudio/src/main/resources/a/ck/headers/hw/SpaceDisplay.h" 1
# 13 "comms/matrix_mul.cpp" 2

# 1 "C:/Users/gabil/Documents/inf3610_tp4/Calculator/import/src/matrix_def.h" 1
# 15 "comms/matrix_mul.cpp" 2
# 1 "C:/Users/gabil/Documents/inf3610_tp4/Calculator/import/src/matrix.h" 1



# 1 "C:/Users/gabil/Documents/inf3610_tp4/Calculator/import/src/matrix_def.h" 1
# 5 "C:/Users/gabil/Documents/inf3610_tp4/Calculator/import/src/matrix.h" 2
extern unsigned int* matrix_data[];
# 16 "comms/matrix_mul.cpp" 2

matrix_mul::matrix_mul(sc_core::sc_module_name name, double period,
  sc_core::sc_time_unit unit, unsigned char id, unsigned char priority,
  bool verbose) :
  SpaceBaseModule(name, period, unit, id, priority, verbose) {
 SC_THREAD(thread);

 set_stack_size(0x16000 + 200 * 200 * 4 * 3);

 m_result = new unsigned int[200 * 200];
 m_operand1 = new unsigned int[200 * 200];
 m_operand2 = new unsigned int[200 * 200];
}

void matrix_mul::thread(void) {
 while (1) {
  readOperand();
  multiplyMat();
  sendResult();
 }
}







void matrix_mul::readOperand() {
 ModuleRead(1, SPACE_BLOCKING, m_operand1, 200 * 200);
 ModuleRead(1, SPACE_BLOCKING, m_operand2, 200 * 200);
}






void matrix_mul::sendResult() {
 SpacePrint("%d z %d = %d and %d \n", m_operand1[0], m_operand2[0],m_result[0], m_result[200 * 200 - 1]);
 ModuleWrite(1, SPACE_BLOCKING, m_result, 200 * 200);
}

void matrix_mul::multiplyMat() {
 unsigned int i, j, k, sum;

 for (i = 0; i < 200; i++)
 {
  for (j = 0; j < 200; j++)
  {
   sum = 0;
   for (k = 0; k < 200; k++)
   {
    sum += m_operand1[i * 200 + k] * m_operand2[k * 200 + j];
   }
   m_result[i * 200 + j] = sum;
  }
 }
}
