#include <stdio.h>
int main() 
   {
   int i, j, rows;
   char operator;
   printf("choose the pattern: ");
   scanf("%c", &operator);
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
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
