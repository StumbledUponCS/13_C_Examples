/*Program Name: 3-4Switch*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
int main()
{
     int num=2;

     switch(num+2)
     {
         case 1:
           printf("Case1: Value is: %d", num);
         case 2:
           printf("Case2: Value is: %d", num);
         case 3:
           printf("Case3: Value is: %d", num);
         default:
           printf("Default: Value is: %d", num);
    }
     
   
    return 0;
}