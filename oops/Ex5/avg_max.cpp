#include<iostream>
using namespace std;
class B;
class A
{
   float x;
   friend class B;
   public:
   A()
   {
      x=10;
   }
};
class B
{
   float y,z;
   public:
   B()
   {
      y=5;
   }
   float avg()
   {
      A a;
      z=(a.x+y)/2;
      return z;
   }
   float max()
   {
      A a;
      if (a.x>y)
	 return a.x;
      else
	 return y;
   }
};
int main()
{
   B b;
   cout<<"\nAverage :"<<b.avg();
   cout<<"\nMaximum :"<<b.max();
}
