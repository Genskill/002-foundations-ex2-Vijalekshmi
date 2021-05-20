#include <stdio.h>
#include <cs50.h.h>
int main() 
   {
   int i, j, rows;
   char operator;
   char operator=get_int("choose the pattern: ");
 
   int rows=("Enter the number of rows: ");
   
   
   switch (operator) 
   {
       case '1':
   for (i = rows; i >= 1; --i)
   {
      for (j = 1; j <= i; ++j)
      {
         printf("* ");
      }
      printf("\n");
   }
   break;
   
   case '2':
  
   for (i = 1; i <= rows; ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("* ");
      }
      printf("\n");
   }
  
    break;
     default:
        printf("Error! operator is not correct");
        
}
 return 0;
   }
