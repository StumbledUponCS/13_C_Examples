/*Program Name: 3-5aWhileStatement*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

//first the condition is checked and then the statements in while loop are executed

#include <stdio.h>
int main()
{
//Example of a while loop
printf("\nExample of a while loop\n");
   int count=1;
   while (count <= 4)
   {
	printf("%d ", count);
	count++;
   }

 //Example of while loop using logical operator
 //Just like relational operators (<, >, >=, <=, ! =, ==), we can also use logical operators in while loop. 
 //using AND(&&) operator, which means both the conditions should be true
 //OR(||) operator, this loop will run until both conditions return false
 
 printf("\nExample of while loop using operator\n");
   int i=1, j=1;
   while (i <= 4 || j <= 3)
   {
	printf("%d %d\n",i, j);
	i++;
	j++;
   }  
 
   return 0;
}