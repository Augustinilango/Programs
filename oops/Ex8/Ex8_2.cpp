#include<iostream>
using namespace std;
class Base{
   protected:
      int BaseNum;
   public:
      virtual void GetData(){
	 cout<<"Enter Num: ";
	 cin>>BaseNum;
      }
      virtual void Display(){
	 cout<<"Base class: "<<BaseNum<<endl;
      }
};
class Der1:public Base{
   protected:
      int D1Num;
   public:
      void GetData(){
	 cout<<"Enter Num: ";
	 cin>>D1Num;
      }
      void Display(){
	 cout<<"Derived class 1: "<<D1Num<<endl;
      }
};
class Der2:public Der1{
   protected:
      int D2Num;
   public:
      void GetData(){
	 cout<<"Enter Num: ";
	 cin>>D2Num;
      }
      void Display(){
	 cout<<"Derived class 2: "<<D2Num<<endl;
      }
};
class Der3:public Der2{
   protected:
      int D3Num;
   public:
      void GetData(){
	 cout<<"Enter Num: ";
	 cin>>D3Num;
      }
      void Display(){
	 cout<<"Derived class 3: "<<D3Num<<endl;
      }
};
class Der4:public Der3{
   protected:
      int D4Num;
   public:
      void GetData(){
	 cout<<"Enter Num: ";
	 cin>>D4Num;
      }
      void Display(){
	 cout<<"Derived class 4: "<<D4Num<<endl;
      }
};
class Der5:public Der4{
   protected:
      int D5Num;
   public:
      void GetData(){
	 cout<<"Enter Num: ";
	 cin>>D5Num;
      }
      void Display(){
	 cout<<"Derived class 5: "<<D5Num<<endl;
      }
};
int main(){
   Base *p;
   Base b1;
   p=&b1;
   p->GetData();
   p->Display();
   Der1 d1;
   p=&d1;
   p->GetData();
   p->Display();
   Der2 d2;
   p=&d2;
   p->GetData();
   p->Display();
   Der3 d3;
   p=&d3;
   p->GetData();
   p->Display();
   Der4 d4;
   p=&d4;
   p->GetData();
   p->Display();
   Der5 d5;
   p=&d5;
   p->GetData();
   p->Display();
   return 0;
}
