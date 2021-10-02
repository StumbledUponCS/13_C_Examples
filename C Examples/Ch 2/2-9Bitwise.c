/*Program Name: 2-9Bitwise*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

/*Bitwise Operators.  boolean logic.*/
/* & AND    | inclusive OR    ^ exclusive OR    */
/* << left shift     >> right shift    - one's unary complement   */

#include <stdio.h>

int main()
{
   /*BITWISE  &  is different than  &&  */
   int a = 1, b = 2, c = 0;
   c = a & b;
   printf("\nc=%d  c is zero when c = a & b\n", c);
   c = a && b;
   printf("c=%d  c is one when c = a && b\n", c);   
   
   c = 7;
   printf("\nc=%d then & mask the bits with 1010 becomes\n", c);
   c = c & 1010;
   printf("c=%d\n", c);
   /*c=2 because 7 in bits = 0111
    then c & 1010 turns to zero the one bits
    so the result 0010 equals */
    
   c = 10;
   printf("\nc=%d then | mask the bits with 0010 becomes\n", c);
   c = c | 2;
   printf("c=%d\n", c);
   /*c=10 because 10 in bits = 1010
    then c | 2   8 in bits = 0010 turns on the two bit
    but the two bit was already on so the result 1010 equals 10 */
    
   /*bit location values 8421. bit on = 1. bit off = 0. bits 1010 = decimal 10.
   c = 4;
   printf("\nc=%d then | mask the bits with 1000 becomes\n", c);
   c = c | 2;
   printf("c=%d\n", c);
   /* c=4 because 3 in bits = 0100 */ 
   /* then c | 2   2 in bits = 0010 turns to one the two bit*/ 
   /* so the result 0110 equals 6*/ 
   
   return 0;
}