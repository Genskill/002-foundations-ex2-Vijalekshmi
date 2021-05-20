#include<stdio.h>
#include<cs50.h>
int main(void)
{
   int a = get_int("side");
   int b = get_int("side");
   int c = get_int("side");
   if(a+b>=c,a+c>=b,b+c>=c)
   {
       printf("yes");
   }
   else
   {
      printf("no"); 
   }
}
   }
