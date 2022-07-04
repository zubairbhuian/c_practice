// A number is valid if it is positive or even. Take input from user and check its validity
#include<stdio.h>


int main ()
{  

   int number,X,Y;
   scanf("%d",&number);
   while (number --)
   {
      scanf("%d %d",&X,&Y);
      if(X>Y)
      printf("Frist\n");
      else
      printf("Second\n");
   }
   
   printf("Hello");

    return 0;
}

