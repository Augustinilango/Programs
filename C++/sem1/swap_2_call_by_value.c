#include<stdio.h>
void swap(int,int);
int main()
{
   int a,b;
   printf("Enter the 2 numbers separated by spaces:");
   scanf("%d%d",&a,&b);
   printf("\nBefore swapping value in main, a=%d ,b=%d",a,b);
   swap(a,b);
}
void swap(int a,int b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
   printf("\nafter swapping value in function a=%d,b=%d",a,b);
}
