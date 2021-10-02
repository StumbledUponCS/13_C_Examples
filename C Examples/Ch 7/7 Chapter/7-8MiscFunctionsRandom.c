#include <stdio.h>
#include <stdlib.h> // page 252 rand function 
#include <time.h> // needed for seed

#define SIZE 256
/* One is the default integer value to be used as seed 
by the pseudo-random number generator algorithm. 
The pseudo-random number generator should only be seeded once, 
before any calls to rand(), and the start of the program. 
It should not be repeatedly seeded, or reseeded every time you wish 
to generate a new batch of pseudo-random numbers.  */

/* srand(): Set seed for rand() function*/
void srand(unsigned int seed);

int main () {
   int i, n;
   time_t t; /* time as reference for radomization */
 
   /* Print n random numbers from 0 to 49. seed = 1. */
   n = 5;   
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\n", rand() % 50);
   }
   
   printf("\n\n");
   /* Intializes random number generator to current time*/
   srand((unsigned) time(&t));
   /* Print n random numbers from 0 to 50 */
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\n", rand() % 50);
   }
 
   return(0);
}