#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    /* 
     * ASCII Table Headers
     * Column widths:
     * - Data Type: 22 chars
     * - Size (Bytes): 12 chars
     * - Minimum Value: 26 chars
     * - Maximum Value: 26 chars
     */
    printf("+----------------------+--------------+----------------------------+----------------------------+\n");
    printf("| %-20s | %-12s | %-26s | %-26s |\n", "Data Type", "Size (Bytes)", "Minimum Value", "Maximum Value");
    printf("+----------------------+--------------+----------------------------+----------------------------+\n");

    /* 
     * CHARACTER TYPES
     * Plain char can be signed or unsigned depending on compiler implementation.
     * Expressed explicitly in standard integer format (%d, %u).
     */
    printf("| %-20s | %-12zu | %-26d | %-26d |\n", "char", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("| %-20s | %-12zu | %-26d | %-26d |\n", "signed char", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("| %-20s | %-12zu | %-26u | %-26u |\n", "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);

    printf("+----------------------+--------------+----------------------------+----------------------------+\n");

    /* 
     * SHORT INTEGER TYPES
     * Guaranteed to be at least 16 bits (2 bytes).
     */
    printf("| %-20s | %-12zu | %-26d | %-26d |\n", "short", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("| %-20s | %-12zu | %-26d | %-26d |\n", "signed short", sizeof(signed short), SHRT_MIN, SHRT_MAX);
    printf("| %-20s | %-12zu | %-26u | %-26u |\n", "unsigned short", sizeof(unsigned short), 0, USHRT_MAX);

    printf("+----------------------+--------------+----------------------------+----------------------------+\n");

    /* 
     * STANDARD INTEGER TYPES
     * Typically 32 bits (4 bytes) on most modern architectures.
     */
    printf("| %-20s | %-12zu | %-26d | %-26d |\n", "int", sizeof(int), INT_MIN, INT_MAX);
    printf("| %-20s | %-12zu | %-26d | %-26d |\n", "signed int", sizeof(signed int), INT_MIN, INT_MAX);
    printf("| %-20s | %-12zu | %-26u | %-26u |\n", "unsigned int", sizeof(unsigned int), 0U, UINT_MAX);

    printf("+----------------------+--------------+----------------------------+----------------------------+\n");

    /* 
     * LONG INTEGER TYPES
     * At least 32 bits, often 64 bits on 64-bit Unix systems.
     */
    printf("| %-20s | %-12zu | %-26ld | %-26ld |\n", "long", sizeof(long), LONG_MIN, LONG_MAX);
    printf("| %-20s | %-12zu | %-26ld | %-26ld |\n", "signed long", sizeof(signed long), LONG_MIN, LONG_MAX);
    printf("| %-20s | %-12zu | %-26lu | %-26lu |\n", "unsigned long", sizeof(unsigned long), 0UL, ULONG_MAX);

    printf("+----------------------+--------------+----------------------------+----------------------------+\n");

    /* 
     * LONG LONG INTEGER TYPES
     * Guaranteed to be at least 64 bits (8 bytes).
     */
    printf("| %-20s | %-12zu | %-26lld | %-26lld |\n", "long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("| %-20s | %-12zu | %-26lld | %-26lld |\n", "signed long long", sizeof(signed long long), LLONG_MIN, LLONG_MAX);
    printf("| %-20s | %-12zu | %-26llu | %-26llu |\n", "unsigned long long", sizeof(unsigned long long), 0ULL, ULLONG_MAX);

    printf("+----------------------+--------------+----------------------------+----------------------------+\n");

    /* 
     * FLOATING-POINT TYPES
     * 
     * Scientific notation (%e / %Le) is used for floating-point bounds.
     * Minimum finite values are expressed as negative maximums (-FLT_MAX, -DBL_MAX, -LDBL_MAX).
     *
     * Precision details:
     * - float:       ~6 decimal digits of precision (FLT_DIG = 6).
     * - double:      ~15 decimal digits of precision (DBL_DIG = 15).
     * - long double: ~18-19 decimal digits of precision (LDBL_DIG = 18+ depending on architecture).
     *
     * Note on positive min values:
     * - Smallest normalized positive float:       FLT_MIN  (~1.175494e-38)
     * - Smallest normalized positive double:      DBL_MIN  (~2.225074e-308)
     * - Smallest normalized positive long double: LDBL_MIN (~3.362103e-4932)
     */
    printf("| %-20s | %-12zu | %-26.6e | %-26.6e |\n", "float", sizeof(float), -FLT_MAX, FLT_MAX);
    printf("| %-20s | %-12zu | %-26.6e | %-26.6e |\n", "double", sizeof(double), -DBL_MAX, DBL_MAX);
    printf("| %-20s | %-12zu | %-26.6Le | %-26.6Le |\n", "long double", sizeof(long double), -LDBL_MAX, LDBL_MAX);

    printf("+----------------------+--------------+----------------------------+----------------------------+\n");

    return 0;
}