/*Program Name: 4-5HeaderFile*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
#include "IncludeWith288.h"

int main(){
   printf("myName = %s\n",myName);
   printf("NameID = %d\n",NameID);
   
   int a = 150, b = 225, c = myResult(a,b); /*=((a*3)+(b*2))*/
   printf("c = %d\n", c);
   
   return 0;
}