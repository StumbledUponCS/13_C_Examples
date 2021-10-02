/*Program Name: 5-9PointersWithMultiDimensionArray*/
/*Author: Anuha*/
/*Course:SU21CS288-H3*/
/*Date Created: 07/14/2021*/

#include<stdio.h>
 
int main()
{
    int arr[3][4] = {
                        {11,22,33,44},
                        {55,66,77,88},
                        {11,66,77,44}
                    };
 
    int i, j;
 
    for(i = 0; i < 3; i++)
    {
        printf("Address of %d th array %d \n",i , *(arr + i));
        for(j = 0; j < 4; j++)
        {
             printf("arr[%d][%d]=%d\n", i, j, *( *(arr + i) + j) );
        }
        printf("\n\n");
    }
 
    printf("Program Finished!\n");
    return 0;
}