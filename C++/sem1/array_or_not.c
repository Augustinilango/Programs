#include<stdio.h>
int main()
{
   int a[10],n,i,k,t=0;
   printf("Enter the total number of elements ");
   scanf("%d",&n);
   printf("Enter the elements one by one");
   for (i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Enter the elements to be searched");
   scanf("%d",&k);
   for (i=0;i<n;i++)
   {
      if(a[i]==k)
      {
	 t=1;
	 break;
      }
   }
   if(t==1)
   {
      printf("the elements present in the array ");
   }
   else
   {
      printf(" the elements not found in array");
   }
   return 0;
}
