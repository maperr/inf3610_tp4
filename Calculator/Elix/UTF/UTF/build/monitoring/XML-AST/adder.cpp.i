# 1 "comms/adder.cpp"
# 1 "<command-line>"
# 1 "comms/adder.cpp"
# 11 "comms/adder.cpp"
# 1 "C:/Users/gabil/Documents/INF3610A15Lab4Pt1/SpaceProject/Lab/Calculator/Calculator/src/module/adder.h" 1
# 14 "C:/Users/gabil/Documents/INF3610A15Lab4Pt1/SpaceProject/Lab/Calculator/Calculator/src/module/adder.h"
# 1 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceStudio/src/main/resources/a/ck/headers/hw/systemc.h" 1



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
# 5 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceStudio/src/main/resources/a/ck/headers/hw/systemc.h" 2


namespace std {}
using std::ios;
using std::streambuf;
using std::streampos;
using std::streamsize;
using std::iostream;
using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::flush;
using std::dec;
using std::hex;
using std::oct;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::size_t;
using std::memchr;
using std::memcmp;
using std::memcpy;
using std::memmove;
using std::memset;
using std::strcat;
using std::strncat;
using std::strchr;
using std::strrchr;
using std::strcmp;
using std::strncmp;
using std::strcpy;
using std::strncpy;
using std::strcspn;
using std::strspn;
using std::strlen;
using std::strpbrk;
using std::strstr;
using std::strtok;
# 15 "C:/Users/gabil/Documents/INF3610A15Lab4Pt1/SpaceProject/Lab/Calculator/Calculator/src/module/adder.h" 2
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



class SpaceBaseModule;
# 16 "C:/Users/gabil/Documents/INF3610A15Lab4Pt1/SpaceProject/Lab/Calculator/Calculator/src/module/adder.h" 2

class adder : public SpaceBaseModule
{
 public:

  SC_HAS_PROCESS(adder);




  adder(sc_module_name zName, double dClockPeriod, sc_time_unit Unit, unsigned char ucID, unsigned char ucPriority, bool bVerbose);




  void thread(void);

 private:




  long add(long operand1, long operand2);
  long readOperand();
  void sendResult(long data);
};
# 12 "comms/adder.cpp" 2
# 1 "temp/PlatformDefinitions.h" 1
# 13 "comms/adder.cpp" 2
# 1 "C:/Users/gabil/Documents/INF3610A15Lab4Pt1/SpaceProject/Lab/Calculator/Calculator/src/application/ApplicationDefinitions.h" 1
# 14 "comms/adder.cpp" 2
# 1 "C:/SpaceCodesign/SpaceStudio-2.7.0/SpaceStudio/src/main/resources/a/ck/headers/hw/SpaceDisplay.h" 1
# 15 "comms/adder.cpp" 2







adder::adder(sc_module_name zName, double dClockPeriod, sc_time_unit ClockPeriodUnit, unsigned char ucID, unsigned char ucPriority, bool bVerbose)
: SpaceBaseModule( zName, dClockPeriod, ClockPeriodUnit, ucID, ucPriority, bVerbose )
{
 SC_THREAD(thread);
}







void adder::thread(void)
{
 long operand1;
 long operand2;
 long result;

 while(1)
 {
  operand1 = readOperand();
  operand2 = readOperand();
  result = add(operand1, operand2);
  sendResult(result);
 }
}






long adder::add(long operand1, long operand2)
{
 return operand1 + operand2;
}






long adder::readOperand()
{
 long data;

 ModuleRead(1, SPACE_BLOCKING, &data);

    return data;
}






void adder::sendResult(long data)
{
 ModuleWrite(1, SPACE_BLOCKING, &data);
}
