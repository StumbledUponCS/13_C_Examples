/*Program Name: 4-0gets*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include<stdio.h>

int main()
{
    printf("\n\n\t\tCS288 C Language, gets program\n\n\n");

    char str[50];   // char array of size 50
    printf("Enter your complete name:\n\n");

    gets(str);
    printf("\n\nWelcome to CS288 C Language Programming  %s\n\n", str);
    printf("\n\n\t\tProgramming is Fun !\n\n");
    return 0;
}