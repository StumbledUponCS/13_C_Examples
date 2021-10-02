#include <stdio.h>
#include <stdlib.h> /*needed for stderr and exit */
/* cat: concatenate files, version 2 */

/* filecopy: copy file ifp to file ofp */
void filecopy(FILE *ifp, FILE *ofp) /* pointer to input, and output */
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
   
   if (argc == 1){ /* no args; copy standard input */
      /* filecopy(stdin, stdout);  /* keyboard_input is repeated as display_output, ctrl_break to exit */
      int maxlinesize = 100;
      char line[maxlinesize];
      FILE *fp;
      fp = fopen("7-0NoInputFileResponse.txt", "r");  /*needs input file otherwise does not know what to write as error message*/
      fgets(line, maxlinesize, fp);
      printf("line= %s\n", line);
      fclose(fp);
      fp = fopen("7-0Error_Log_File.txt", "a");
      fputs("\n", fp);
      fputs(line, fp);
      fclose(fp);
    
   }
   else
      while (--argc > 0)
         if (( fp = fopen(*++argv, "r")) == NULL) { /* pointer to next command line file */
            fprintf(stderr, "\n%s: can not open %s\n", prog, *argv);
            exit(1);  /* determined by programmer return value for error type #1 */
         } 
         else {
            filecopy(fp, stdout);
            fclose (fp);
         }
         
   if(ferror(stdout)) {
      fprintf(stderr, "%s: error writing stdout\n", prog);
      exit(2);  /* determined by programmer return value for error type #2 */
   }
   
   exit(0);  /* determined by programmer return value for error type #0, success */
}