#include<iostream>
using namespace std;
class student
{
   int roll,id;
   public:
   student(int a,int b)
   {
      roll=a;
      id=b;
   }
   student(student &s2)
   {
      id=s2.id;
   }
   void display()
   {
      cout<<"College of the student :"<<id<<endl;
   }
};
int main()
{
   int x,y;
   cout<<"Enter a roll number :";
   cin>>x;
   cout<<"Enter a college id :";
   cin>>y;
   student s(x,y);
   student s1(s);
   student s2=s;
   s1.display();
   s2.display();
   return 0;
}
