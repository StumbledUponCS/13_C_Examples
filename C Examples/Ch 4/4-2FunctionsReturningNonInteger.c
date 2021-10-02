/*Program Name: 4-2FunctionsReturningNonInteger*/
/*Author: "your_name_here"*/
/*Course:SemesterYearCS288-Section#  example SU21CS288-H3 FA21CS288-02 SP21CS288-01 */
/*Date Created: mm/dd/yyyy*/

#include <stdio.h>
const int PI = 3.14159265;
 
// Function Prototype (Function Declaration)
double getArea(double radius);
 
int main() {
   double radius1 = 1.1, area1, area2;
   // call function getArea()
   area1 = getArea(radius1);
   printf("area 1 is %.2lf\n", area1);
   // call function getArea()
   area2 = getArea(2.2);
   printf("area 2 is %.2lf\n", area2);
   // call function getArea()
   printf("area 3 is %.2lf\n", getArea(3.3));
}
 
// Function Definition
// Return the area of a circle given its radius
double getArea(double radius) {
   return radius * radius * PI;
}