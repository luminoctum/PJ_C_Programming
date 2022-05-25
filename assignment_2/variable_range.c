#include <stdio.h>
#include <limits.h>
#include <float.h>

/*Exercise 2.1 with help from online source for understanding bit computation*/

int main () {
    // Range of variables using bit computation
    printf("Printing range of variables by using bit computation:\n\n");

    printf("Minimum signed value of char is %d\n", -(char)((unsigned char) ~0 >> 1) -1);
    // ~0 is the complement of unsigned char in bits
    // >> will right shift the entire sequence and insert 0 to the left side
    // -(char) multiplies the value by -1
    // subtracting 1 to move one number further to the left
    printf("Maximum signed value of char is %d\n", (char)((unsigned char) ~0 >> 1));

    printf("Minimum signed value of short is %d\n", -(short)((unsigned short) ~0 >> 1) -1);
    printf("Maximum signed value of short is %d\n", (short)((unsigned short) ~0 >> 1));

    printf("Minimum signed value of int is %d\n", -(int)((unsigned int) ~0 >> 1) -1);
    printf("Maximum signed value of int is %d\n", (int)((unsigned int) ~0 >> 1));

    printf("Minimum signed value of long is %ld\n", -(long)((unsigned long) ~0 >> 1) -1);
    printf("Maximum signed value of long is %ld\n", (long)((unsigned long) ~0 >> 1));

    printf("Minimum unsigned value of char is 0\n");
    printf("Maximum unsigned value of char is %d\n", (unsigned char) ~0);

    printf("Minimum unsigned value of short is 0\n");
    printf("Maximum unsigned value of short is %d\n", (unsigned short) ~0);

    printf("Minimum unsigned value of int is 0\n");
    printf("Maximum unsigned value of int is %u\n", (unsigned int) ~0);

    printf("Minimum unsigned value of long is 0\n");
    printf("Maximum unsigned value of long is %lu\n\n", (unsigned long) ~0);

    //Range of variables from standard headers
    printf("Printing range of variable from standard headers:\n\n");

    printf("Minimum signed value of char is %d\n", SCHAR_MIN);
    printf("Maximum signed value of char %d\n", SCHAR_MAX);

    printf("Minimum signed value of short is %d\n", SHRT_MIN);
    printf("Maximum signed value of short is %d\n", SHRT_MAX);

    printf("Minimum signed value of int is %d\n", INT_MIN);
    printf("Maximum signed value of int is %d\n", INT_MAX);

    printf("Minimum signed value of long is %ld\n", LONG_MIN);
    printf("Maximum signed value of long is %ld\n", LONG_MAX);

    printf("Minimum unsigned value of char is 0\n");
    printf("Maximum unsigned value of char is %d\n", UCHAR_MAX);

    printf("Minimum unsigned value of short is 0\n");
    printf("Maximum unsigned value of short is %d\n", USHRT_MAX);

    printf("Minimum unsigned value of int is 0\n");
    printf("Maximum unsigned value of int is %u\n", UINT_MAX);

    printf("Minimum unsigned value of long is 0\n");
    printf("Maximum unsigned value of long is %lu\n", ULONG_MAX);

return 0;
}
