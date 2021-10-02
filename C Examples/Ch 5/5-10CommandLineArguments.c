/*Program Name: 5-10CommandLineArguements*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h> 

int main( int argc, char *argv [] )
{
    printf(" \n Name of my Program %s \t", argv[0]);

    if( argc == 2 )
    {
        printf("\n Value given by user is: %s \t", argv[1]);
    }
    else if( argc > 2 )
    {
        printf("\n Many values given by users.\n");
    }
    else
    {
        printf(" \n Single value expected.\n");
    }
}