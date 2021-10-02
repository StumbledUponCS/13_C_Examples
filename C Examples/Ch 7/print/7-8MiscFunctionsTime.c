/*Program Name: 7-8MiscFunctionsTime*/
/*Author: Anuha*/
/*Course:SU21CS288-H3*/
/*Date Created: 07/18/2021*/


#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 256

int main(void)
{
   time_t t;
   time_t current_time;
   char* c_time_string;
   
   char buffer[SIZE];
   time_t curtime;
   struct tm *loctime;
   
    /* Obtain current time. */
    current_time = time(NULL);

    if (current_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to obtain the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

    if (c_time_string == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Print to stdout. ctime() has already added a terminating newline character. */
    (void) printf("Current time is %s", c_time_string);
    printf("Success!\n");
     
   /* Get the current time. */
   curtime = time (NULL);
   /* Convert it to local time representation. */
   loctime = localtime (&curtime);
   /* Print out the date and time in the standard format. */
   fputs (asctime (loctime), stdout);
   /* Print it out in a nice format. */
   strftime (buffer, SIZE, "Today is %A, %B %d.\n", loctime);
   fputs (buffer, stdout);
   strftime (buffer, SIZE, "The time is %I:%M %p.\n", loctime);
   fputs (buffer, stdout);

   exit(EXIT_SUCCESS);
    
}