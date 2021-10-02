#include <stdio.h>
#include <stdlib.h> /*needed for stderr and exit */
/* cat: concatenate files, version 2 */

/* filecopy: copy file ifp to file ofp */
void filecopy(FILE *ifp, FILE *ofp) /* pointer to input file, output file */
{
   int c;
   while ((c = getc(ifp)) != EOF)
      putc(c, ofp);
}

int main(int argc, char *argv[])
{
   FILE *fp;
   void filecopy(FILE *, FILE *);
   char *prog = argv[0];  /* this program exe name as source of an error */
   
   if (argc == 1){ /* when no args on command line, copy keyboard to display, must ctrl_break or End to exit */
      filecopy(stdin, stdout); /* stdin is the standard input keyboard , stdout is the standard output screen display */
   }
   else
      while (--argc > 0)
         if (( fp = fopen(*++argv, "r")) == NULL) { /* pointer to next command line file */
            fprintf(stderr, "\nERROR the program   %s    can not open command line file    %s\n", prog, *argv); /*fprintf allows stderr message */
            exit(1);  /* determined by programmer return value for error type #1 */
         } else { /*the contents of each command line file are printed in this block structure*/
            filecopy(fp, stdout);
            fclose (fp);
         }
/*The ferror() function tests for an error in reading from or writing to the given stream. 
If an error occurs, the error indicator for the stream remains set until you close stream, call the rewind() function, or call the clearerr() function.
The ferror() function returns a nonzero value to indicate an error on the given stream. A return value of 0 means that no error has occurred.
*/
   if(ferror(stdout)) {
      fprintf(stderr, "%s: error writing stdout\n", prog);
      exit(2);  /* determined by programmer return value for error type #2 */
   }
   
   exit(0);  /* determined by programmer return value for error type #0, success */
}