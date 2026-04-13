#include<stdio.h>
int main()
{
   int a[10],n,i,k,t=0;
   printf("enter the total no.of.elements");
   scanf("%d",&n);
   printf("Enter elements one by one");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Enter the elements to the searched");
   scanf("%d",&k);
   for (i=0;i<n;i++)
   {
      if(a[i]==k)
      {
	 t++;
      }
   }
   printf("The no.of elements %d is occurencing %d times",k,t);
}
