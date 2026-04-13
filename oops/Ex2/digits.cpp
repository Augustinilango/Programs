#include<iostream>
using namespace std;
class calculate
{
   int num,i,temp,j,total;
   int *n;
   public:
   calculate(int b)
   {
      num=b;
      total=0;
   }
   void digit()
   {
      temp=num;
      while(num>0)
      {
	 total++;
	 num=num/10;
      }
      cout<<"\nthe total no.of digits :"<<total<<endl;
      int *n=new int [total];
      for(i=0;i<total;i++)
      {
	 n[i]=temp%10;
	 temp=temp/10;
      }
      cout<<"Number of digits representation is ";
      for (j=i-1;j>=0;j--)
      {
	 cout<<n[j];
	 i--;
      }
   }
};
int main()
{
   int a;
   cout<<"Enter a number :";
   cin>>a;
   calculate c1(a);
   c1.digit();
   return 0;
}
