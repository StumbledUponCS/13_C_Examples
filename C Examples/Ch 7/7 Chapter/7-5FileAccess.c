#include <stdio.h>
/* cat: concatenate files, version 1 */

/* filecopy: copy file ifp to file ofp */
void filecopy(FILE *ifp, FILE *ofp)
{
   int c; /* one character at a time */
   while ((c = getc(ifp)) != EOF)
      putc(c, ofp);
}

int main(int argc, char *argv[])
{
   FILE *fp;
   void filecopy(FILE *, FILE *);
   if (argc == 1) /* no args; copy standard input */
      filecopy(stdin, stdout);
   else
      while (--argc > 0)
         if (( fp = fopen(*++argv, "r")) == NULL) {
            printf("\ncat: can't open %s\n", *argv);
            return 1;
         } else {
            filecopy(fp, stdout);
            fclose (fp);
         }
   return 0;
}
         

