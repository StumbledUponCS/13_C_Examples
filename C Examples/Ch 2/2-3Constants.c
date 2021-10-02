/*Program Name: 2-3Constants*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

/*
   A character constant is an integer, written as one character 
   within single quotes such as 'x'.  The value of the constant 
   is the numeric value of the character set.
   See page 38 for complete set of escape sequences as character.
   \a is alert bell     \b is backspace         \f is formfeed
   \n is newline        \r is carriage_return   \t is horizontal tab
   \v is vertical tab   \\ is backslash         \? is question_mark
   \' is single_quote   \" is double_quote
   \000 is octal_number ranging 000 to 777 to denote an ASCII value
   \xhh is hexidecimal_number the h ranging (0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F)
*/

/*
  '\0' represents the character with value zero, the null character.
  It ends a character string.  Strings can be of length zero or more.
  A character constant is an integer, written as one character within single quotes.
   e.g. '0'  whose numeric value is relates to the ASCII table equates 48.
  A constant expression is an expression that involves only constants.  
  That means it has no variables in it.  FIFTEEN MaxStringLen
   e.g. #define FIFTEEN 15     or     char s[]="July" #define MaxStringLen strlen(s)
  A string constant otherwise known as string literal is an array of characters
  a sequence of zero or more characters surrounded by double quotes.
   e.g. "Z"  or  "I am a string." 
*/

/*
   Be careful to distinguish between a character constant 
   and a string that contains a single character thus
   'x' is not the same as "x".  
   'x' is an integer value.  
   "x" is an array of characters that in this example contains
   one character (the letter x) and a '\0'.
*/

/*
   enumeration constant is a list of constant integer values
      enum months {JAN = 1, FEB, MAR, APR}  
      e.g. FEB would be assigned 2 by the system and so on.
      The first enum has value zero the next one, 
      unless explicit values are specified.
*/
#include <stdio.h>

#define SALES_TAX .06625  /*FYI 6.625 percent*/
#define STATE_NJ "NJ"

int main()
{
char x = '0';
char y[] = "0";
int z = 0;
char a[] = "hello";

   printf("%s%1.5f%s%s%s\n", "My sales tax is ", SALES_TAX, " in my state of ", STATE_NJ, "."); 
         /*it could round up if < .5f*/
         
   printf("%c\n", x);
   printf("%s\n", y);
   printf("%d\n", z);
   printf("%s\n", a);
   
   if (x == 0)
      printf("x equals 0\n");
   else
      printf("x not equals 0\n");
   if (x == '0')
      printf(" x equals \'0\'\n");
   if (x == 48)
      printf("%d%s\n", x, " equals ASCII value of 48\n");
   
   printf("%s%c\n", "Initialized y equals ", y[0]);
   if (y[0] == 0)
      printf("%s%s\n", "The", " y equal 0");
   else if (y[0] == '0')
      printf("%s%s\n", "The", " y equal \'0\'");
   else if (y[0] == '\0')
      printf("%s%s\n", "The", " y is null \'0\'");
   else
      printf("The y has error.\n");
   if (y[1] == '\0')
      printf("%c%s\n", y[1], " equals ASCII end of char string\n");
   
   printf("%c%c%c%c%c%c\n", a[0], a[1], a[2], a[3], a[4], a[5]);
   /* a[6] is equal to null character '\0' a non-display character*/
   printf("%s\n", a);
   
   printf("%s%d%c", "The z is an integer with value ", z, '.');
      
   return 0;
}

