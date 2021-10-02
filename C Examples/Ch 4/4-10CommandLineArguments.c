/*Program Name: 4-PassingCommandLineArgv*/
/*Author: Anuha*/
/*Course:SU21CS288-H3*/
/*Date Created: 07/14/2021*/

#include <stdio.h>
#include <stdlib.h> /*needed to convert string to integer*/

/* argc is a numeric value representing the quantity of arguments on the command line.*/ 
/* argv starts counting from position zero, argv[0] is always the program name.*/
int main( int argc, char *argv[] ){
   int exit_code = 0, total = 0, num = 0;
   printf("argc=%d\n", argc);
   
   if(argc == 1){
      printf("At least one argument value after the program name is expected on command line.\n");
      exit_code = argc; /*set exit_code to 1 because no data on command line*/
   }
   
   for (int i=0; i < argc; i++){
      printf("argv[%d] argument value given on the command line is %s\n", i, argv[i]);
      /* atoi will produce zero when argv[i] is not a number*/
      if(i > 0){num = atoi(argv[i]); total=total+num;}
   }
   
   printf("total=%d\n", total);
   return exit_code;
}