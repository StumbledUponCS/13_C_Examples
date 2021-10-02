/*Program Name: 3-5aDoWhileStatement*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

//do-while runs at least once even if the condition is false because the condition is evaluated, after the execution of the body of loop
#include <stdio.h>
int main()
{
   int i=0,j=0;
//Example of a DoWhile loop
printf("\nExample of a DoWhile loop\n");

	do
	{
		printf("Value of variable j is: %d\n", j);
		j++;
	}while (j<=3);
   return 0;
} 
