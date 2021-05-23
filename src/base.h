#ifndef BASE_H
#define BASE_H

#include <stdint.h>

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;

typedef u32      b32;

typedef float    r32;
typedef double   r64;

#define ArrayLength(x) (sizeof (x) / sizeof (x)[0])

#if defined(DEBUG)
#define Assert(x) if(!(x) { *(int*)0 = 0); }
#else
#define Assert(x)
#endif

#endif //BASE_H
