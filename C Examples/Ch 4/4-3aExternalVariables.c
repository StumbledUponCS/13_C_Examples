/*Program Name: 4-3aExternalVariables*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

/*
 * This example assumes the program you want to execute
 * is called Sample4-3b.exe, and resides in the same 
 * directory as this program
 */

#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 

int main()
{
  char childb1[] = "Sample4-3b.exe";
  char childb2[BUFSIZ];
  
  /* 
   * Execute by passing the name directly 
   */
  system ("Sample4-3b.exe");
  
  /*
   * Execute by passing an array name
   */
  system (childb1);
  
  /*
   * Build a buffer, and execute the commands within it
   */
  strcpy (childb2, "Sample4-3b.exe");
  strcat (childb2, " -aparm -b");
  
  printf ("Executing %s\n", childb2);
  system (childb2);
  
  return 0;
}
