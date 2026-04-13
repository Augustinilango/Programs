#include<stdio.h>
int main()
{
   int n,r,rev=0,original;
   printf("Enter the number");
   scanf("%d",&n);
   original=n;
   while(n>0)
   {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
   }
   if (original==rev)
   {
      printf("The given number is palindrome");
   }
   else
   {
      printf("The given number is not a palindrome");
   }
   return 0;
}
