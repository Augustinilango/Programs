#include<iostream>
using namespace std;
class Time
{
   int h,m,s;
   public:
   Time()
   {
      h=m=s=0;
   }
   Time(int hr,int min,int sec)
   {
      h=hr;
      m=min;
      s=sec;
      m+=s/60;
      s=s%60;
      h+=m/60;
      m=m%60;
   }
   Time operator++()
   {
      Time result;
      result.h = ++h;
      result.m = ++m;
      result.s = ++s;
      return result;
   }
   Time operator++(int)
   {
       Time result;
       result.h = h++;
       result.m = m++;
       result.s = s++;
       return result;
   }
   Time operator--()
   {
       Time result;
       result.h = --h;
       result.m = --m;
       result.s = --s;
       return result;
   }
   Time operator--(int)
   {
      Time result;
      result.h = h--;
      result.m = m--;
      result.s = s--;
      return result;
   }
   void display()
   {
      cout<<h<<":"<<m<<":"<<s<<endl;
   }
};
int main()
{
   Time t1(5,30,60);
   cout<<"Real time :";
   t1.display();
   cout<<"Increment of ++t1 :";
   cout<<"\n";
   Time t2=++t1;
   t2.display();
   cout<<"decrement of --t1 :";
   cout<<"\n";
   Time t3=--t1;
   t3.display();
   cout<<"Increment of t1++ :";
   cout<<"\n";
   Time t4=t1++;
   t4.display();
   cout<<"Decrement of t1-- :";
   cout<<"\n";
   Time t5=t1--;
   t5.display();
   return 0;
}
