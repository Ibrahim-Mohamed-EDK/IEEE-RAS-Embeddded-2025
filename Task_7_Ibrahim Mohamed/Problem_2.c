#include <stdio.h>

// Rename all primitive types using typedef
typedef unsigned char      u8;    // 8-bit unsigned
typedef signed char        i8;    // 8-bit signed
typedef unsigned short     u16;   // 16-bit unsigned
typedef signed short       i16;   // 16-bit signed
typedef unsigned int       u32;   // 32-bit unsigned
typedef signed int         i32;   // 32-bit signed
typedef unsigned long long u64;   // 64-bit unsigned
typedef signed long long   i64;   // 64-bit signed
typedef float              f32;   // 32-bit float
typedef double             f64;   // 64-bit float

int main() {
    printf("Size of u8  (unsigned char):      %zu bytes\n", sizeof(u8));
    printf("Size of i8  (signed char):        %zu bytes\n", sizeof(i8));
    printf("Size of u16 (unsigned short):     %zu bytes\n", sizeof(u16));
    printf("Size of i16 (signed short):       %zu bytes\n", sizeof(i16));
    printf("Size of u32 (unsigned int):       %zu bytes\n", sizeof(u32));
    printf("Size of i32 (signed int):         %zu bytes\n", sizeof(i32));
    printf("Size of u64 (unsigned long long): %zu bytes\n", sizeof(u64));
    printf("Size of i64 (signed long long):   %zu bytes\n", sizeof(i64));
    printf("Size of f32 (float):              %zu bytes\n", sizeof(f32));
    printf("Size of f64 (double):             %zu bytes\n", sizeof(f64));

    return 0;
}