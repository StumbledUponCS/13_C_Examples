/*Program Name: 7-8MiscFunctionsTimeWrite*/
/*Author: Anuha*/
/*Course:SU21CS288-H3*/
/*Date Created: 07/18/2021*/

#include<stdio.h>
 
int main() {
   int exit_code = 0;
   FILE *fp;
   char* product;
   int quantity;
   float price;
   
   fp = fopen("7-8CurrentTime.txt", "a");
    
   if(fp == NULL) {
      printf("File can not be opened.\n");
      exit_code = 1;
   }
   else{
      printf("Enter product name: ");
      scanf("%c", &product);
   
      printf("Enter quantity: ");
      scanf("%d", &quantity);
   
      printf("Enter price: ");
      scanf("%f", &price);    
    
      fprintf(fp, "SOLD: Product Name: %s\t Quantity: %d\t Price: %.2f\n", &product, quantity, price);
      fclose(fp);
      
      printf("\nWritten to file successfully.\n\n");
   }

   return exit_code;
}