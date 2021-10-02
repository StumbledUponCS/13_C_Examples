/*Program Name: 1-3ForStatement*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>

int main()
{
   int x;
   /*notice the brackets {} for blocking of statements*/
   for(x = 0; x <= 5; x = x + 1){
      printf("x= %d\n", x);
      if (x == 3){
         printf("Loop is going to break.\n");
         break;   /*breaks out of the for loop*/
      }
    }
    /*program continues here after break*/
    printf("Program finished!");
}
      
