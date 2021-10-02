/*Program Name: 5-7TwoDimensionalArrayIntegersDeclareInitialize*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include<stdio.h>
int main(){
   int i, j;
   int y = 2, x = 4;   
   /* 2D array declaration*/
   int disp['y']['x'] = {
    {10, 11, 12, 13},
    {14, 15, 16, 17}
   };
   /* ALTERNATIVE CODE METHOD int disp[2][4] = { 10, 11, 12, 13, 14, 15, 16, 17}; */
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<y; i++) {
      for(j=0;j<x;j++) {
         printf("%d ", disp[i][j]);
         // printf("j= %d y= %d x= %d", j, y, x);
         if(j==x-1){ // need to say x-1 because j starts counting from zero, x from one
            printf("\n");
         }
      }
   }
   return 0;
}