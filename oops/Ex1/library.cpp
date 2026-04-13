#include<iostream>
using namespace std;
class book
{
   string title;
   int num,price,copy;
   public:
   book()
   {
      title="";
      num=0;
      price=0;
      copy=0;
   }
   ~book()
   {}
   void getdata()
   {
      cout<<"Enter Title :";
      cin>>title;
      cout<<"Enter Book Number :";
      cin>>num;
      cout<<"Enter Price :";
      cin>>price;
      cout<<"Enter Copies :";
      cin>>copy;
   }
   int getprice()
   {
      return price;
   }
   int getcopy()
   {
      return copy;
   }
};
int main()
{
   book b1,b2;
   b1.getdata();
   b2.getdata();
   int a=b1.getprice();
   int b=b1.getcopy();
   int p=b2.getprice();
   int q=b2.getcopy();
   int width=(a*b)+(p*q);
   cout<<"Total Width :"<<width;
   return 0;
}
