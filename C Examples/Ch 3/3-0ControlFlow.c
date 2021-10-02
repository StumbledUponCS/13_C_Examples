/*Program Name: 3-0ControlFlow*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

   /*Block Statements use these braces {} to
   group together declations and statements
   into a compound statement, otherwise known as a block,
   to be syntatically equivalant to a single statement.*/

#include <stdio.h>
int x = 0, y = 0, z = 0, return_value = 0;
char c;

int main(){
      return_value = 0;
      goto module01;
p1:      /*program control comes back here*/

      printf("BEFORE: for loop block statemnt return_value=%d.\n", return_value);
      for(x = 1; x < 3; ++x){
         return_value = -1;
         printf("x=%d.\n", x);
         break; /*break_statement early exit from for, while, do, and switch*/
         x = 9; y = 9; z = 1;
         printf("x=%d y=%d z=%d.\n",x,y,z);
         return_value = 0;
      }
      printf("AFTER: for loop block statemnt return_value=%d.\n\n", return_value);
   
   return_value = 0;
   printf("BEFORE: for if, else if, else statemnt return_value=%d.\n", return_value);
   x = 7;
   if (x < 5)
      printf("x is less than five.\n");
   else if (x == 5)
      printf("x equals five.\n");
   else{
      printf("By default, x must be greater than five.\n");
      return_value = -1;  /*sets return value of -1 when program exits.*/
      }
   printf("AFTER: for if, else if, else statemnt return_value=%d.\n\n", return_value);
      
   return_value = 0;
   printf("BEFORE: switch statemnt return_value=%d.\n", return_value);
   x = 7; c = x; /*could either switch test (x) or (c)*/
   switch(c){
   case '0':
      printf("Case is zero, x=%d.\n", x);
   case '7':
      printf("Case is seven, x=%d.\n", x);   
   default:
      printf("default no match found, x=%d.\n", x);
      return_value = -1;
   }
   printf("AFTER: switch statemnt return_value=%d.\n\n", return_value);
   
   x = return_value = 0;
   printf("BEFORE: while statemnt return_value=%d.\n", return_value);
   while(x < 3) /*here a semi-colon is not used*/
   /*test the while loop termination at the top*/
   {
      printf("x=%d\n", x);
      x++;
   }
   printf("AFTER: while statemnt return_value=%d.\n\n", return_value);
   
   x = 10; return_value = 0;
   printf("BEFORE: do statemnt return_value=%d.\n", return_value);
   do
   {
      printf("x=%d\n", x);
      x++;
   }while (x < 13); /*here a semi-colon is required*/
   /*test the do loop termination at the bottom*/
   printf("AFTER: do return_value=%d.\n\n", return_value);
   
   printf("Program finished!\n");
   return return_value;

/*label name is module01*/
module01: /*goto is unecessary code.  typically only used to 
         abort an error condition, executng further statements,
         and then exiting the program*/
   printf("Performing module01 statements.\n\n");
   goto p1;
}

   