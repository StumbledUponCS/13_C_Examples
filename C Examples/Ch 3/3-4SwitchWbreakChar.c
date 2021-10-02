/*Program Name: 3-4SwitchWbreakChar*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
int main()
{
     char ch='b';
     switch (ch)
     {
         case 'd':
            printf("CaseD ");
            break;
         case 'b':
            printf("CaseB");
            break;
         case 'c':
            printf("CaseC");
            break;
         case 'z':
            printf("CaseZ ");
            break;
         default:
            printf("Default ");
    }
    return 0;
}