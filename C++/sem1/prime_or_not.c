#include<stdio.h>
int main()
{
   int n,i,flag;
   printf("Enter any number");
   scanf("%d",&n);
   for (i=2;i<n;i++)
   {
      if(n%i==0)
      {
	 flag=1;
	 break;
      }
   }
   if(flag==1)
   {
      printf("The Number is not a prime number");
   }
   else
   {
      printf("The Number is prime number");
   }
   return 0;
}
