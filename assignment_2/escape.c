#include <stdio.h>
#define MAXLINE 1000

int escape(char s[], char t[]);
int line(char line[], int maxline);

int main(){

    char s[MAXLINE];
    char t[MAXLINE];

    line(t, MAXLINE);
    escape(s, t);

    printf("%s\n", s);

    return 0;
}

int escape(char s[], char t[]){

    int i, j;

    i = 0;
    j = 0;

    while (t[i] != '\0'){

        switch(t[i]){
            case '\t':
                s[j] = '\\'; //using the "\" for escaping \t
                j++;
                s[j] = 't'; //making the next index in the array "t"
                break;
            case '\n':
                s[j] = '\\';
                j++;
                s[j] = 'n';
                break;
            default:
                s[j] = t[i]; //default case: copying string s at index j into string tat index i
                break;
        }
        i++;
        j++;
    }
    s[j] = '\0';

    return 0;
}

int line(char s[], int limit){

    int i, c;

    for(i=0; i < limit - 1 && (c=getchar()) != EOF; ++i){
        s[i] = c;
    }
    s[i] = '\0';
    
    return 0; 
}

