#include<iostream>
using namespace std;
class Octal{
   int ONum,DNum;
   public:
   Octal()
   { 
      DNum=0;ONum=0; 
   }
   Octal operator=(int n)
   {
      DNum=n;
      int l=0;
      while(n!=0)
      {
	 ONum+=n%8;
	 ONum=ONum*10;
	 n=n/8;
	 l++;
      }
      n=0;
      while(l>=0)
      {
	 n=n*10;
	 n+=ONum%10;
	 ONum=ONum/10;
	 l--;
      }
      ONum=n;
   }
   Octal operator+(Octal B)
   {
      Octal temp;
      temp.DNum=DNum+B.DNum;
      temp=DNum+B.DNum;
      return temp;
   }
   void Display()
   {
      cout<<ONum<<endl;
   }
};
int main()
{
   Octal O1,O2,O3;
   O1=100;
   O2=200;
   O3=O1+O2;
   O1.Display();
   O2.Display();
   O3.Display();
   return 0;
}

