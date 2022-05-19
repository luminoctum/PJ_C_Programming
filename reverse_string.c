#include <stdio.h>
#define MAXLINE 1000
/* reversing a string to a new line */

int reverse(char line [], int maxline);

int main()
{

    char line [MAXLINE];
    int len;

    while (reverse(line, MAXLINE) > 0){
            continue;
    }

    return 0;
}

int reverse(char s[], int lim)
{
    int i, len;
    char c;

    for(i=0; i < lim-1 && (c=getchar())!= EOF && c != '\n'; i++){
        s[i] = c;
    }
    len = i;
    s[i] = '\0';
    char newword [i+1];
    for(i >= 0 && i != '\n'; i--;){
        newword[i] = s[i];
        printf("%c\n", newword[i]);
    }


    return len;
}

