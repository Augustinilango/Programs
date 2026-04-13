#include<stdio.h>
int main()
{
   int x,a,b,c,d,e,f;
   printf("Enter the values of a,b,c,d,e,f");
   scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
   x=(a+b+c+d+e+f)/6;
   if (x>=90&&x<=100)
   {
      printf("Your Grade is A");
   }
   else if (x>=80&&x<=90)
   {
      printf("Your Grade is B");
   }
   else if (x>=70&&x<=80)
   {
      printf("Your Grade is C");
   }
   else if (x>=60&&x<=70)
   {
      printf("Your Grade is D");
   }
   else if (x>=50&&x<=60)
   {
      printf("Your Grade is E");
   }
   else
      printf("Your Grade is Fail");
   return 0;
}
