/*Program Name: 5-5CharPointersAndFunctions*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
char *strrev(char *input);
int main()
{
 char string[64];
 printf("Type some text: ");
 fgets(string,62,stdin);
 puts(strrev(string));
 printf("\nProgram finished!");
 return(0);
}
char *strrev(char *input)
{
 static char output[64];
 char *i,*o;
 i=input; o=output;
 while(*i++ != '\n')
 ;
 i--;
 while(i >= input)
 *o++ = *i--;
 *o = '!';
 return(output);
}