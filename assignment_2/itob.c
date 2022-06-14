#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

/* Write the function itob(n,s,b) that converts the integer n into a base b
character representation in the string s. In particular, itob(n,s,16) formats s as a
hexadecimal integer in s*/

void itob(int n, char s[], int b);
void reverse(char s[]);

int main (){

    int number, base;
    char string[MAXLINE];

    printf("Enter a number ");
    scanf("%d", &number);

    printf("Enter a base  ");
    scanf("%d", &base);

    itob(number, string, base);

    printf("%s\n", string);

    return 0;
}

void itob(int n, char s[], int b){

    int i, j, sign;

    i = 0;
    sign = n;

    //set sign of number positive if it is negative
    if(sign < 0){
        n = -n;
    }
    while(n != 0){
        j = n % b;

        if(j <= 9){
            s[i] = j + '0';
            i++;
        }
        else{
            s[i] = j + 'a' - 10;
            i++;
        }
        n = n/b;
    }
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[]){

    int i, j, c;

    for(i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i], s[i] = s[j], s[j] = c;
    }
}
