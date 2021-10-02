/*Program Name: 3-1IntroC*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

/*
 an expression such as num = 0; or num++ or printf("your_name");
 becomes a statement when it is followed by a semicolon

 the semicolon is a statement terminator

 braces { and } are used to group declarations and statements together into a compund statement or block
 so they are syntactically equivalent to a single statement
 there is no semicolon after the right brace that ends a block
*/

/*
++num increments before its value is used
num++ increment after its value is used
--num or num-- decrements its value likewise before after
*/

#include<stdio.h>
int main()
{
   int num;
	num = 0;
	num++;
	printf("num = %d\n", num);

      printf("Enter your age: ");
      
      scanf("%d", &num);
      if (num <18)
      {
             printf("You are a child.");
      }
      else
      {
             printf("You are an adult.");
      }
      return 0;
}