///         Space Libraries - Space Codesign Systems Inc. (http://www.spacecodesign.com)
///         (c) All Rights Reserved. 2007-2014
///
///         This file contains proprietary, confidential information of Space Codesign
///         Systems Inc. and may be used only pursuant to the terms of a valid license
///         agreement with Space Codesign Systems Inc. For more information about licensing,
///         please contact your Space Codesign representative.
///
///////////////////////////////////////////////////////////////////////////////


#ifndef SPACE_SERIALIZATION_H
#define SPACE_SERIALIZATION_H

#include <sys/param.h> //for bytes ordering

#define SPACE_LITTLE_ENDIAN		1234
#define SPACE_BIG_ENDIAN		4321

#ifndef SPACE_BYTE_ORDER
	#ifdef BYTE_ORDER
		#warning "BYTE_ORDER defined"
		#if BYTE_ORDER == BIG_ENDIAN
			#warning "defining BYTE_ORDER as BIG_ENDIAN"
			#define SPACE_BYTE_ORDER SPACE_BIG_ENDIAN
		#else
			#warning "defining BYTE_ORDER as LITTLE_ENDIAN"
			#define SPACE_BYTE_ORDER SPACE_LITTLE_ENDIAN
		#endif
	#else
		#warning "BYTE_ORDER undefined"
		#ifdef _LITTLE_ENDIAN
		#warning "defining BYTE_ORDER as LITTLE_ENDIAN"
		#define SPACE_BYTE_ORDER SPACE_LITTLE_ENDIAN
		#endif

		#ifdef _BIG_ENDIAN
		#warning "defining BYTE_ORDER as BIG_ENDIAN"
		#define SPACE_BYTE_ORDER SPACE_BIG_ENDIAN
		#endif
	#endif
#endif


#if SPACE_BYTE_ORDER == BYTE_ORDER
	#define HTONS(s) (s)
	#define HTONL(l) (l)
#else
	#define HTONS(s) ( (((s) & 0xFF00) >> 8) | (((s) & 0x00FF) << 8) ) 
	#define HTONL(l) ( (((l) & 0xFF000000) >> 24) | (((l) & 0x00FF0000) >> 8) | (((l) & 0x0000FF00) << 8) | (((l) & 0x000000FF) << 24) )
#endif

#define NTOHS(s) HTONS(s)
#define NTOHL(l) HTONL(l)

#define PUT_LONG(out, l) (out) = HTONL(l)
#define GET_LONG(in, l) (l) = NTOHL(in)

#if SPACE_BYTE_ORDER == SPACE_BIG_ENDIAN 
#warning "Big endian"
	#define PUT_CHAR1(out, c) (out).range(31,24) = (c)
	#define PUT_CHAR2(out, c) (out).range(23,16) = (c)
	#define PUT_CHAR3(out, c) (out).range(15,8) = (c)
	#define PUT_CHAR4(out, c) (out).range(7,0) = (c)
	#define PUT_SHORT1(out, s) (out).range(31,16) = HTONS(s)
	#define PUT_SHORT2(out, s) (out).range(15,0) = HTONS(s)

	#define GET_CHAR1(in, c) (c) = (in).range(31,24);
	#define GET_CHAR2(in, c) (c) = (in).range(23,16);
	#define GET_CHAR3(in, c) (c) = (in).range(15,8);
	#define GET_CHAR4(in, c) (c) = (in).range(7,0);
	#define GET_SHORT1(in, s) (s) = NTOHS((in).range(31,16));
	#define GET_SHORT2(in, s) (s) = NTOHS((in).range(15,0));

	#define WRITE_LONGLONG(out, ll) \
		(out).write( HTONL((ll).range(63,32)) ); \
		SPACE_END_DATA_BEAT; \
		SPACE_BEGIN_DATA_BEAT; \
		(out).write( HTONL((ll).range(31,0)) )

	#define READ_LONGLONG(in, ll) \
		(ll).range(63,32) = NTOHL((in).read()); \
		SPACE_END_DATA_BEAT; \
		SPACE_BEGIN_DATA_BEAT; \
		(ll).range(31,0) = NTOHL((in).read())

#else
#warning "Little endian"
	#define PUT_CHAR1(out, c) (out).range(7,0) = (c)
	#define PUT_CHAR2(out, c) (out).range(15,8) = (c)
	#define PUT_CHAR3(out, c) (out).range(23,16) = (c)
	#define PUT_CHAR4(out, c) (out).range(31,24) = (c)
	#define PUT_SHORT1(out, s) (out).range(15,0) = HTONS(s)
	#define PUT_SHORT2(out, s) (out).range(31,16) = HTONS(s)

	#define GET_CHAR1(in, c) (c) = (in).range(7,0);
	#define GET_CHAR2(in, c) (c) = (in).range(15,8);
	#define GET_CHAR3(in, c) (c) = (in).range(23,16);
	#define GET_CHAR4(in, c) (c) = (in).range(31,24);
	#define GET_SHORT1(in, s) (s) = NTOHS((in).range(15,0));
	#define GET_SHORT2(in, s) (s) = NTOHS((in).range(31,16));

	#define WRITE_LONGLONG(out, ll) \
		(out).write( HTONL((ll).range(31,0)) ); \
		SPACE_END_DATA_BEAT; \
		SPACE_BEGIN_DATA_BEAT; \
		(out).write( HTONL((ll).range(63,32)) )

	#define READ_LONGLONG(in, ll) \
		(ll).range(31,0) = NTOHL((in).read()); \
		SPACE_END_DATA_BEAT; \
		SPACE_BEGIN_DATA_BEAT; \
		(ll).range(63,32) = NTOHL((in).read())

#endif

union space_ieee_float {
	float value;
	unsigned int bytes;
};

static inline unsigned int space_ieee_float_to_bytes(float value) {
	space_ieee_float sif;
	sif.value = value;
	return sif.bytes;
}

static inline float bytes_to_space_ieee_float(unsigned int bytes) {
	space_ieee_float sif;
	sif.bytes = bytes;
	return sif.value;
}

#define PUT_FLOAT(out, f) PUT_LONG(out, space_ieee_float_to_bytes(f))
#define GET_FLOAT(in, f) GET_LONG(bytes_to_space_ieee_float(in), f)

#endif


/* (c) Space Codesign 2007-2014 */
