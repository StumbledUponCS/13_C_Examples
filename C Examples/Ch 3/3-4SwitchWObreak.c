/*Program Name: 3-4SwitchWObreak*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
int main()
{
     int i=2;
     switch (i)
     {
        case 1:
           printf("Case1 ");
        case 2:
           printf("Case2 ");
        case 3:
           printf("Case3 ");
        case 4:
           printf("Case4 ");
        default:
           printf("Default ");
     }
    return 0;
}