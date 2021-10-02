/*Program Name: 5-11PointerToFunctions*/
/*Author: Anuha*/
/*Course:SU21CS288-H3*/
/*Date Created: 07/19/2021*/

#include <stdio.h>
void salaryhike(int  *var, int b)
{
    *var = *var+b;
}
int main()
{
    int salary=0, bonus=0;
    printf("Enter the employee current salary:"); 
    scanf("%d", &salary);
    printf("Enter bonus:");
    scanf("%d", &bonus);
    salaryhike(&salary, bonus);
    printf("Final salary: %d", salary);
    return 0;
}