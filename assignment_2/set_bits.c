#include <stdio.h>

//returns the value x with n bits that begin at position p
//and the rightmost n bits of y
//leaving all other bits unchanged

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main () {

    unsigned int x, y;
    int n, p;

    printf("x = ");
    scanf("%d", &x);

    printf("p = ");
    scanf("%d", &p);

    printf("n = ");
    scanf("%d", &n);

    printf("y = ");
    scanf("%d", &y);

    printf("\nThe new value is %u\n", setbits((unsigned)x, p, n, (unsigned)y));

    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y){

    return x & ~(~(~0 << n) << (8-(p+n))) | ((y & (~(~0 << n))) << (8-(p+n)));

}

