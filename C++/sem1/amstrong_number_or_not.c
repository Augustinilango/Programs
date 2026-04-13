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
       rev=rev+r*r*r;
       n=n/10;
    }
    if (original==rev)
    {
       printf("The given number is amstrong");
    }
       else
    {
       printf("The given number is not a amstrong");
    }
       return 0;
}
