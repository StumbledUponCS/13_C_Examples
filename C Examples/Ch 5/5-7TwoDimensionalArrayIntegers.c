/*Program Name: 5-7TwoDimensionalArrayIntegers*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include<stdio.h>
int main(){
   /*Counter variables for the loop*/
   int i, j;
   /* 2D array declaration with initialization*/
   int disp[2][4] = {
    {10, 11, 12, 13},
    {14, 15, 16, 17}
   };
   disp[1][3]= 99;
   /* ALTERNATIVE CODE METHOD int disp[2][4] = { 10, 11, 12, 13, 14, 15, 16, 17}; */
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<4;j++) {
         printf("%d ", disp[i][j]);
         if(j==3){
            printf("\n");
         }
      }
   }
   return 0;
}