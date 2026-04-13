#include<stdio.h>
#define n=5 
int s[n];
int top=-1;
void push()
{
   int x;
   printf("Enter the element");
   scanf("%d",&x);
   if(top>n-1)
   {
      printf("stack is empty");
   }
   else
   {
      top=top+1;
      s[top]=x;
   }
}
void display()
{
   int i;
   for (i=0;i>=0;i++)
   {
      printf("element is %d",s[i]);
   }
}
void main()
{
   push();
   push();
   push();
   push();
   display();
}
