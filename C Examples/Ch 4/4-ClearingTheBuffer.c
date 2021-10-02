/*Program Name: 4-ClearingTheBuffer*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>

int main(){

   char c1[] = "Z";
   int c2 = '0';
   int xFactor = 10;
   int answer = 0;
   
   printf("Enter the character 1 for cs.\n");
   c2 = getchar();
   if(c2 == '1'){
      printf("\nc2 does equal \'1\'\n"); /*for char '1' testing only*/;
   }
   while((c2 = getchar()) != '\n' && c2 != EOF); /* clears the buffer c2 */
   
   printf("Enter the integer value for cs.\n");
   c2 = getchar() - 48;
   while (c2 != -38){
         answer = (answer*xFactor) + c2;
         c2 = getchar() - 48; /* minus 48 because decimal 48 = char zero */
  }
   printf("cs= %d\n", answer);   

return 0;
}