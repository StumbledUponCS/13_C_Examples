/*Program Name: 1-2VariablesExpressions */
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
/* print Farenheit Celsius table
   for fahr = 0, 20, ..., 300
*/
   
/* cLanguage provides basic data type
   char c = "A"   character of a single byte
   char s[] = "ABC" character string length 4 ending with '0'
   char s[5] = "ABC" character string of length 5, 4th position with '\0'
   int      integer
   short    short integer
   long     long integer
   float    fractional number
   double   double precision floating point
*/

/* printf formatting
   %d    print as decimal integer
   %6d   print as decimal integer, at least 6 characters wide
   %f    print as floating point
   %6f   print as floating point, at least 6 characters wide
   %.2f  print as floating point, 2 characters after decimal point
   %6.2f print as floating point, at least 6 wide and 2 after decimal point
   \n    print new line
   \t    print tab
*/

/* Data Type Conversions
   When an operator has operands of different type, they are converted
   to a common type according to a small number of rules.
   That narrower operand into a wider operand without losing information.
   e.g. integer into a float.
*/  
   
int main()
{  char n = '~';
   char f[] = "Fahr";      /*char f[] length undeclared*/
   char c[8] = "Celsius"; /*has to be at least c[8] to hold 7 char plus '\0'*/
   float fahr, celsius;
   
   int lower, upper, step;
   lower = 0;
   upper = 300;
   step = 20;
   
   printf("%c%s\t%c%s\n", n, f, n, c);
   fahr = lower;
   while (fahr <= upper){
      celsius = (5.0/9.0) * (fahr-32.0);
      printf("%3.0f,%6.1f\n", fahr, celsius);
      fahr = fahr + step;
   }
}
