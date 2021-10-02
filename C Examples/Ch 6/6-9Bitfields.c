/*Program Name: 6-9Bitfields*/
/*Author: Anuha*/
/*Course:SU21CS288-H3*/
/*Date Created: 07/22/2021*/

#include <stdio.h>

int main()
{
	typedef struct Student_NoBit {
		int StdId;
		int Age;
	}STD_NOBIT;

	typedef struct Student {
		int StdId : 8;
		unsigned int Age : 5; /* this has to be Age : 5 */  /*or greater than 5*/
	}STD;

	STD_NOBIT std_nb;
	STD std;

	printf("\nSize of  Student structure without bitfield: %lu\n", sizeof(std_nb));
	printf("Size of  Student ID without bitfield: %lu\n", sizeof(std_nb.StdId));
	printf("Size of  Student Age without bitfield: %lu\n", sizeof(std_nb.Age));
	printf("Size of  Student structure with bitfield: %lu\n", sizeof(std));

	std.Age = 15; // this member can store max of 15 numbers from 0-15
	printf("Age of the Student with bitfield: %d\n", std.Age);

	std.Age = 17; // Since it is more than 15, it starts displaying the remainder values
	printf("Age of the Student with Bitfield: %d\n", std.Age);
   
   return 0;
}