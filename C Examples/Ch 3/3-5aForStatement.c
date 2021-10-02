/*Program Name: 3-5aForStatement*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
int main()
{
   int i,j;
//Example of a for loop
printf("\nExample of a for loop\n");

   for (i=1; i<=3; i++)
   {
       printf("%d\n", i);
   }
//Example of nested for loop
printf("\nExample of nested for loop\n");

   for (int i=0; i<2; i++)
   {
	   for (int j=0; j<4; j++)
	   {
	      printf("%d, %d\n",i ,j);
	   }
   }   
//Example of for loop with multiple test conditions
printf("\nExample of for loop with multiple test conditions\n");

   for (i=1,j=1 ; i<3 || j<5; i++,j++)
   {
	printf("%d, %d\n",i ,j);
   }
   
   return 0;
} 
