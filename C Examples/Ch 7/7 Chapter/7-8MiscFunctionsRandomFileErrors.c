#include <stdio.h>
#include <string.h> // needed for strerror string messages
#include <stdlib.h> // page 252 rand
#include <time.h> // needed for seed

int exit_code = EXIT_SUCCESS;
int seed_generator(int s);
int print_random(int seed); // identifies the function without return

int main () {
   time_t t;  // uses time.h see pages 255-256      
   int seed = 0; // not necessary set seed=1 because it will default to 1
   
   /* The unsigned int is data type which cannot represent a negative number. 
   The c language NULL is equal to integer zero.  MAC users do (unsigned) 0 .*/
   seed = seed_generator((unsigned) NULL); // seed static
   print_random(seed);

   /* Intializes random number generator using time */
   /* time is a positive number, would return -1 when not available */
   seed = seed_generator((unsigned) time(&t)); // seed dynamic time(&t)
   print_random(seed);
   
   int result = 9;
   printf("Enter 9 to create file '7-0miscFile.txt' or 8 to lock file or 7 to unlock file: "); scanf("%d", &result);
   if(result == 9){
      FILE *tmpfile; tmpfile = fopen("7-0miscFile.txt", "w"); fclose(tmpfile);
   }
   else if(result == 8){
      system("attrib +R 7-0miscFile.txt"); //MAC Linux lock = chmod 555 filename
   }
   else if(result == 7){
      system("attrib -R 7-0miscFile.txt"); //MAC Linux unlock = chmod 755 filename
   }
   else{
      result = remove("7-0miscFile.txt");
   }
   if(errno > 0){
      fprintf(stderr, "ERROR #%d %s. Exiting program.\n", errno, strerror(errno));
      exit(EXIT_FAILURE);
   }
   
   printf("result is: %d errno is: %d program exit_code is: %d\n", result, errno, exit_code);
   return(exit_code);
}

int seed_generator(int seed)
{
   /*srand() is used by the pseudo-random number generator algorithm. 
   To set the seed before any calls to rand(). */
   srand(seed);
   return(seed);
}

/* function to print random numers n times */
int print_random(int seed)
{  
   int n = 5; // number of loop iterations
   if(seed == 0){printf("Print random static numbers.\n");} else{printf("Print random dynamic numbers.\n");}
   /* Print 5 random numbers from 0 to 50 */
   for( int i = 0 ; i < n ; i++ ) {
      printf("%d\n", rand() % 50);
   }
   return(EXIT_SUCCESS);
}