/*Program Name: 5-2PointersAndFunctionArguments*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
// Swapping two numbers using pointers
void swapnum(int *num1, int *num2)
{
   int tempnum;

   tempnum = *num1;
   *num1 = *num2;
   *num2 = tempnum;
}

void salaryhike(int  *var, int b)
{
    *var = *var+b;
}

int main( )
{
   int v1 = 11, v2 = 77 ;
   printf("Before swapping:");
   printf("\nValue of v1 is: %d", v1);
   printf("\nValue of v2 is: %d", v2);

   /*calling swap function*/
   swapnum( &v1, &v2 );

   printf("\nAfter swapping:");
   printf("\nValue of v1 is: %d", v1);
   printf("\nValue of v2 is: %d", v2);
   
   // Passing pointer to a function 
   int salary=0, bonus=0;
   printf("\n\nEnter the employee current salary:"); 
   scanf("%d", &salary);
   printf("Enter bonus:");
   scanf("%d", &bonus);
   
   //calling salaryhike function
   salaryhike(&salary, bonus);
   printf("Final salary: %d", salary);
   
   return 0;
}