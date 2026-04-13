# include <iostream>
using namespace std;
class car
{
   string brand,model;
   int year,rate;
   public:
   car()
   {
      brand="";
      model="";
      year=0;
      rate=0;
   }
   ~car()
   {}
   void getdata()
   {
      cout<<"Enter the Car Brand :";
      cin>>brand;
      cout<<"Enter the Car Model :";
      cin>>model;
      cout<<"Enter the Year:";
      cin>>year;
      cout<<"Enter the Price:";
      cin>>rate;
   }
   void display()
   {
      cout<<"The Brand Of The Car :"<<brand<<endl;
      cout<<"The Model Of The Car :"<<model<<endl;
      cout<<"Year Of The Model :"<<year<<endl;
      cout<<"Price Of The Car :"<<rate<<endl;
   }
};
int main()
{
   car c;
   c.getdata();
   c.display();
   return 0;
}
