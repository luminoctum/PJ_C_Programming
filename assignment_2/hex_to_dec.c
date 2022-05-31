#include <stdio.h>
#define MAXLINE 100
#define TRUE 1
#define FALSE 0

/* turning hexidecimal digits into integer values */

int readstring(char hexstring[], int maxline);
int htoi(char s[]);

int main () {

    char hexstring[MAXLINE];
    int digitval;

    readstring(hexstring, MAXLINE);
    digitval = htoi(hexstring);

    printf("%s as an integer is %d\n", hexstring, digitval);

    return 0;

}

int readstring(char s[], int lim){ //reading in string of digits
    int c, i;

    for(i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i){
        s[i] = c;

    if(c=='\n'){
        s[i] = c;
        ++i;
    }
    }
    s[i] = '\0';

    return i;

}

int htoi(char s[]){
    int i;
    i = 0;
    if(s[i] == '0'){//testing to see if the first character is 0
        ++i;
        if(s[i] == 'x' || s[i] == 'X'){ //testing to see if the second character is x
            ++i;
            } //incrementing i to move on from 0 and x
    }
    int test, hex, d, j;

    test = TRUE;
    d = 0;

    for(; test == TRUE; ++i){
            if(s[i] >= '0' && s[i] <= '9'){
                hex = s[i] - '0';
            }
            else if(s[i] >= 'a' && s[i] <= 'f'){
                hex = s[i] - 'a' + 10;
            }
            else if(s[i] >= 'A' && s[i] <='F'){
                hex = s[i] - 'A' + 10;
            }
            else{
                test = FALSE;
            }

            if(test == TRUE){
                d = 16*d + hex;
            }

    }
    return d;
}

