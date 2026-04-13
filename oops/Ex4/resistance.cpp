#include<iostream>
using namespace std;
class Resistance
{
   float i,v;
   public:
   Resistance()
   {
      i=0.00;
      v=100.00;
   }
   void cal(int r1,int r2)
   {
      float i1,i2;
      i1=v/r1;
      i2=v/r2;
      cout<<"current through resistor 1:"<<i1<<endl;
      cout<<"current through resistor 2:"<<i2<<endl;
   }
   void cal(int r1,int r2,int r3)
   {
      float i1,i2,i3;
      i1=v/r1;
      i2=v/r2;
      i3=v/r3;
      cout<<"current through resistor 1:"<<i1<<endl;
      cout<<"current through resistor 2:"<<i2<<endl;
      cout<<"current through resistor 3:"<<i3<<endl;
   }
};
int main()
{
   int a,b,c;
   cout<<"Resistor Values :";
   cin>>a>>b>>c;
   Resistance r1;
   r1.cal(a,b);
   cout<<"\n";
   r1.cal(a,b,c);
   return 0;
}
