/*CS288 FA19 Section-2 */
/*Program Name:2-BitwiseSwitchBreak */
/*Program Description: Bitwise Logic, Switch with Break Statements */
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>

int main()
{
   int boolean_int_value = 99;
   int x_int = 2;
   char y_char = 'B';
   
/*   True returns one.   False returns zero.*/
   boolean_int_value = (x_int == 2);
   printf("Boolean x_int True %d\n", boolean_int_value);
   boolean_int_value = (x_int == 5);
   printf("Boolean x_int False %d\n", boolean_int_value);
   printf("\n");
   
   boolean_int_value = (y_char == 'B');
   printf("Boolean y_char True %d\n", boolean_int_value);
   boolean_int_value = (y_char == 'Z');
   printf("Boolean y_char False %d\n", boolean_int_value);
   printf("\n");
   
   boolean_int_value = (x_int == 2 && y_char == 'B'); /*both true so result true*/
   printf("Boolean AND both True %d\n", boolean_int_value);
   boolean_int_value = (x_int == 2 && y_char == 'Z');
   printf("Boolean AND y_char False %d\n", boolean_int_value);
   boolean_int_value = (x_int == 5 && y_char == 'B');
   printf("Boolean AND x_int False %d\n", boolean_int_value);
   printf("\n");
   
   boolean_int_value = (x_int == 2 || y_char == 'Z'); /*either true so result true*/
   printf("Boolean OR x_int True %d\n", boolean_int_value);
   boolean_int_value = (x_int == 5 || y_char == 'B'); /*either true so result true*/
   printf("Boolean OR y_char True %d\n", boolean_int_value);
   printf("\n");
   
   switch(x_int){
   case 1:
      printf("switch x_int = 1\n");
      break;
   case 2:
      printf("switch x_int = 2\n");
      break;
   default:
      printf("switch case match was not found.\n");
      break;
   }

   switch(y_char){
   case 'A':
      printf("switch y_char = A\n");
      break;
   case 'B':
      printf("switch y_char = B\n");
      break;
   default:
      printf("switch case match was not found.  \
      There is a difference between upper and lower case character letters.");
      break;
   }

   printf("Program finished!\n");
   return 0; // set to zero then no exit statement shown
}
