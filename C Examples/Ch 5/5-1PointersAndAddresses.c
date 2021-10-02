/*Program Name: 5-1PointersAndAddresses*/
/*Author: Anuha*/
/*Course:SU21CS288-H3*/
/*Date Created: 07/14/2021*/

#include <stdio.h>
int main()
{
   int num = 10;
   printf("Value of variable num is: %d", num);
   /* To print the address of a variable we use %p
    * format specifier and ampersand (&) sign just
    * before the variable name like &num.
    */
   printf("\nReference by address &, address of variable num is: %p\n", &num);
   
   //Pointer declaration
   int *p;

   //Assigning address of num to the pointer p
   num =10; //previously declared int above
   p = &num;

   printf("Reference by pointer *, address of variable num is: %p\n", p);

   return 0;
}