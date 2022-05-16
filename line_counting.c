#include <stdio.h>
/* count lines in input */
int main()
{
int c, nl, tabs, blanks;
nl = 0;
tabs = 0;
blanks = 0;
while ((c = getchar()) != EOF){
  if (c == '\n')
    ++nl;
  if (c == '\t')
    ++tabs;
  if(c == ' ')
    ++blanks;
  }
printf("The number of new lines is %d\n", nl);
printf("The number of tabs is %d\n", tabs);
printf("The number of blanks is %d\n", blanks);
return 0;
}
