:#include<stdio.h>
int main()
{
   int a=10,b;
   printf("after a++;a=%d\n",a);
   a++;
   printf("after ++a;a=%d\n",a);
   b=a++;
   printf("after b=a++,b=%d,a=%d\n",b,a);
   a--;
   printf("after a--,a=%d\n",a);
   --a;
   printf("after --a,a=%d\n",a);
   b=--a;
   printf("after b=--a,b=%d,a=%d\n",b,a);
   return 0;
}
