/*Program Name: 2-5OperatorsLogic*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

/*Standard Algebra Rules apply. + - * / () %  */
/*The modulus operator % performs Integer Division truncating any fractional part.*/

#include <stdio.h>
#define YEAR 1776;

int main()
{
   /*Leap Year Example with boolean && || !not test criteria*/
   int year = YEAR;
   if (!(year == 0) && (year != 0))
      printf("The year is not 0000.\n");
   else
      printf("The year is 0000.\n");
      
   if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
      printf("%d is a leap year.\n", year);
   else
      printf("%d is not a leap year\n", year);
   
   /* Increment and Decrement Operators*/
   int x = 0, n = 5;
   printf("\nSTARTING x = %d  n = %d\n", x, n);
   
   x = n++;
   printf("POST INCREMENT x = %d  n = %d\n", x, n);
   
   x = 0; n = 5;
   printf("STARTING x = %d  n = %d\n", x, n);
   x = ++n;
   printf("PRE INCREMENT x = %d  n = %d\n", x, n);
   
   printf("\nIncrement after execution of block statements then tests.\n");
   /* using ++x would have the same effect */
   for (x = 0; x < 3; x++)
   {   
      printf("Multiple statements in this for statement block are each executed.\n");
      printf("x = %d\n", x);
   }
   
   return 0;
}