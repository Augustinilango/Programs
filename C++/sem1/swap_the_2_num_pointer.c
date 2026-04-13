#include<stdio.h>
int main()
{
   int x,y,*a,*b,temp;
   printf("Enter the values of x and y:");
   scanf("%d%d",&x,&y);
   printf("\nBefore swapping x=%d and y=%d",x,y);
   a=&x;
   b=&y;
   temp=*b;
   *b=*a;
   *a=temp;
   printf("\nAfter swapping x=%d and y=%d",x,y);
   return 0;
}
