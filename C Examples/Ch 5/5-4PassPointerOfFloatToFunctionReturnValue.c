/*Program Name: 5-4PassPointerOfFloatToFunctionReturnValue*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
void discount(float *a);
int main()
{
 float price = 42.99;
 printf("The item costs $%.2f\n",price);
 discount(&price);
 printf("With the discount, that's $%.2f\n",price);
 printf("\nProgram finished!");
 return(0);
}
void discount(float *a)
{
 *a = *a * 0.90;
}