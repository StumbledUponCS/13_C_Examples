/*Program Name: 3-5aContinueStatement*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

//The continue statement is used inside loops. 
//When a continue statement is encountered inside a loop, 
//control jumps to the beginning of the loop for next iteration, 
//skipping the execution of statements inside the body of loop 
//for the current iteration.

#include <stdio.h>
int main()
{
   int i,j;
//Example of continue statement
printf("\nExample of a continue statement\n");
   for (j=0; j<=9; j++)
   {
      if (j==4)
      {
	    /* The continue statement is encountered when
	     * the value of j is equal to 4.
	     */
	    continue;
       }
   
   /* This print statement would not execute for the
	* loop iteration where j ==4  because in that case
	* this statement would be skipped.
	*/
   printf("%d ", j);
   
   // the for loop stops when j ==7, so 8 and 9 will not print
   if (j==7) break;
 
   }


   return 0;
} 
