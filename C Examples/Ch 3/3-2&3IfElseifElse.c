/*Program Name: 3-2&3IfElseifElse*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
int x = 0, return_value = 0;

int main(){

   return_value = 0;
   printf("BEFORE: for if, else if, else statemnt return_value=%d.\n", return_value);
   x = 7;
   if (x < 5)
      printf("x is less than five.\n");
   else if (x == 5)
      printf("x equals five.\n");
   else{
      printf("By default, x must be greater than five.\n");
      return_value = -1;  /*sets return value of -1 when program exits.*/
      }
   printf("AFTER: for if, else if, else statemnt return_value=%d.\n\n", return_value);

   printf("Program finished!\n");
   return return_value;
}
