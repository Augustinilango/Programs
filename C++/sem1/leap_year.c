#include<stdio.h>
int main()
{
   int a;
   printf("Enter a number");
   scanf("%d",&a);
   if (a%4==0)
      printf("the number is a leap year");
   else
      printf("The number is not a leap year");
   return 0;
}
