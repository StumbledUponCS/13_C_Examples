/*Program Name: 1-5CharInputOutput*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
#define BOOK1 "Books with only the name John";

char c1 = 'A';
int c2 = 'O', eKey;

int main()
{
   printf("RULE OPTIONS:\n");
   printf("1  Books with only the name John\n");
   printf("2  Books with only the name Kennedy\n");
   printf("3  Only Books with both the names John and Kennedy\n");
   printf("4  Only books with the name John and not Kennedy\n");
   printf("5  Only books with then name Kennedy and not John\n");
   
   printf("\nChoose the option, type the number once, press enter to continue.\n");
   c1 = getchar(); eKey = getchar();
     
   printf("Y or N, should books with L.B. Johnson be included?\n");
   printf("Type the letter once, press enter to continue.\n");
   c2 = getchar(); eKey = getchar();
   
   if((c1 == '1' && c2 == 'Y') || (c1 == '1' && c2 == 'y')){
      printf("B1 and LBJ Y\n");}
   else if((c1 == '1' && c2 == 'N') || (c1 == '2' && c2 == 'n')){ 
      printf("B1 and LBJ N\n");}
   else if((c1 == '2' && c2 == 'Y') || (c1 == '2' && c2 == 'y')){
      printf("B2 and LBJ Y\n");}
   else if((c1 == '2' && c2 == 'N') || (c1 == '2' && c2 == 'n')){
      printf("B2 and LBJ N\n");}
   else if((c1 == '3' && c2 == 'Y') || (c1 == '3' && c2 == 'y')){
      printf("B3 and LBJ Y\n");}
   else if((c1 == '3' && c2 == 'N') || (c1 == '3' && c2 == 'n')){
      printf("B3 and LBJ N\n");}
   else if((c1 == '4' && c2 == 'Y') || (c1 == '4' && c2 == 'y')){
      printf("B4 and LBJ Y\n");}
   else if((c1 == '4' && c2 == 'N') || (c1 == '4' && c2 == 'n')){
      printf("B4 and LBJ N\n");}   
   else if((c1 == '5' && c2 == 'Y') || (c1 == '5' && c2 == 'y')){
      printf("B5 and LBJ Y\n");}
   else if((c1 == '5' && c2 == 'N') || (c1 == '5' && c2 == 'n')){
      printf("B5 and LBJ N\n");}   
   else
      printf("Book error.\n");
    
   printf("\nProgram finished!\n");
   return 0;
}