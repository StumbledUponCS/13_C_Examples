/*Program Name: 4-1BasicFunctionNoKeyInput*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
#define Enter_Key 0
int answer(int num1, int num2);

int main()
{
   int var1, var2, x = 0;
   var1 = 5; var2 = 3;
   
   printf("return x before sub_function= %d\n", x);
   x = answer(var1, var2);
   printf("return x after sub_function= %d\n", x);
   
   return 0;
}

int answer(int num1, int num2)
{  int total;
   total = num1 + num2;
   return total;
}