/*Program Name: 5-6PointerArrays-PointersToPointers*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

/*C program to demonstrate example of array of pointers.*/
#include <stdio.h>
 
int main()
{
    /*declare same type of variables*/
    int a,b,c;
     
    /*we can create an integer pointer array to 
  store the address of these integer variables*/
    int *ptr[3];
     
    /*assign the address of all integer variables to ptr*/
    ptr[0]= &a;
    ptr[1]= &b;
    ptr[2]= &c;
     
    /*assign the values to a,b,c*/
    a=100;
    b=200;
    c=300;
     
    /*print values using pointer variable*/
    printf("value of a: %d, b: %d, c: %d\n",*ptr[0],*ptr[1],*ptr[2]);
 
    /*add 10 to all values using pointer*/
    *ptr[0] +=10;
    *ptr[1] +=10;
    *ptr[2] +=10;
    printf("After adding 10\nvalue of a: %d, b: %d, c: %d\n",*ptr[0],*ptr[1],*ptr[2]);
 
    return 0;
}