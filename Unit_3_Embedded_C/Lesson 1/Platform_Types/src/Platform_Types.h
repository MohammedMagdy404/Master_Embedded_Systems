/*
 ============================================================================
 Name        : Platform_Types.c
 Author      : Mohamed Magdy Ali
 Version     :
 Copyright   : Your copyright notice
 Description : the AUTOSAR platform types header file. It contains all platform dependent types and symbols.
 	 	 	   Those types must be abstracted in order to become platform and compiler independent.
 ============================================================================
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include <stdint.h>

// The platform type files for all platforms
#define CPU_TYPE_8 8
#define CPU_TYPE_16 16
#define CPU_TYPE_32 32
#define CPU_TYPE_64 64

#define MSB_FIRST 0
#define LSB_FIRST 1
#define HIGH_BYTE_FIRST 0
#define LOW_BYTE_FIRST 1


#ifndef FALSE
#define FALSE (boolean)0
#endif
#ifndef TRUE
#define TRUE (boolean)1
#endif


// Symbols
// Adjusting these based on H.W and Return for "AUTOSAR Specification of Platform Types" for there compatible types
#define CPU_TYPE CPU_TYPE_16
#define CPU_BIT_ORDER LSB_FIRST
#define CPU_BYTE_ORDER HIGH_BYTE_FIRST

// Types
#if ((CPU_TYPE == CPU_TYPE_16) && (CPU_BIT_ORDER == LSB_FIRST) && (CPU_BYTE_ORDER == HIGH_BYTE_FIRST))

typedef unsigned char boolean;
typedef signed char sint8;
typedef unsigned char uint8;
typedef signed short sint16;
typedef unsigned short uint16;
typedef signed long sint32;
typedef signed long long sint64;
typedef unsigned long uint32;
typedef unsigned long long uint64;
typedef signed char sint8_least;
typedef unsigned char uint8_least;
typedef signed short sint16_least;
typedef unsigned short uint16_least;
typedef signed long sint32_least;
typedef unsigned long uint32_least;
typedef float float32;
typedef double float64;


typedef volatile int8_t vsint8;
typedef volatile uint8_t vuint8;
typedef volatile int16_t vsint16;
typedef volatile uint16_t vuint16;
typedef volatile int32_t vsint32;
typedef volatile int64_t vsint64;
typedef volatile uint32_t vuint32;
typedef volatile uint64_t vuint64;
typedef volatile int_least8_t vsint8_least;
typedef volatile uint_least8_t vuint8_least;
typedef volatile int_least16_t vsint16_least;
typedef volatile uint_least16_t vuint16_least;
typedef volatile int_least32_t vsint32_least;
typedef volatile uint_least32_t vuint32_least;



#endif






#endif /* PLATFORM_TYPES_H_ */
