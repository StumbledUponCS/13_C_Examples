#include <stdio.h>
#include <string.h> // needed for strerror string messages
#include <stdlib.h> // page 252 rand function
#include <time.h> // needed for seed

int exit_code = EXIT_SUCCESS;
int seed_generator(int seed); // identifies the function receiving seed
int print_random(); // identifies the function without return

int main () {
   time_t t; // uses time.h see pages 255-256
   int seed = 0; // not necessary set seed=1 because it will default to 1

   /* The unsigned int is data type which cannot represent a negative number. */ 
   /* The c language NULL is equal to integer zero. Demonstrates static fixed seed value. */
   if(seed_generator((unsigned) NULL) != 0) exit(EXIT_FAILURE);
   printf("Static ");
   if(print_random() != 0) exit(EXIT_FAILURE);
   
   /* Intializes random number generator using time, 
   would return -1 when not available. Demontrates dynamic changing seed value.*/
   if(seed_generator((unsigned) time(&t)) != 0) exit(EXIT_FAILURE);
   printf("Dynamic ");
   if(print_random() != 0) exit(EXIT_FAILURE);

   if(errno == 0){
      fprintf(stderr, "Status errno code is %d.  %s. Continuing program.\n", errno, strerror(errno));
   }
   else{
      fprintf(stderr, "ERROR #%d: %s. Exiting program.\n", errno, strerror(errno));
      exit(EXIT_FAILURE);
   }
   
   printf("NORMAL EXIT: program exit_code is: %d\n", exit_code);
   return(exit_code);
}

int seed_generator(int seed)
{  /*srand() is used by the pseudo-random number generator algorithm. 
   To set the seed before any calls to rand(). */
   srand(seed);
   return(exit_code);
}

int print_random()
{  /* function prints random number range zero to 100 */
   int num = rand() % 100;
   printf("Random number is: %d\n", num);
   return(exit_code);
}