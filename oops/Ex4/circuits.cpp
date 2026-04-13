#include <iostream>
using namespace std;
class dcMotor 
{
   public:
      float backEmf(float I, float Vt = 220, float Ra = 1.2, float Rsh = 75) 
      {
        return Vt - (I-(Vt/Rsh)) * Ra;
      }
      float backEmfSeries(float I, float Vt, float Ra = 1.2, float Rse = 6) 
      {
        return Vt - (I*(Ra+Rse));
      }
      float backEmfCompound(float I, float Vt, float Ra, float Rsh, float Rse) 
      {
        return Vt - ((I-(Vt/Rsh)) * (Ra+Rse)) - ((Vt/Rsh) * Rsh);
      }
};
int main() 
{
    dcMotor m1;
    float i;
    cout<<"Enter Current: ";
    cin>>i;    
    cout<< "Shunt motor Eb: "<<m1.backEmf(i)<<"V"<<endl;
    cout<< "Series motor Eb: "<<m1.backEmfSeries(i,220)<<"V"<<endl;
    cout<< "Compound Motor Eb: "<<m1.backEmfCompound(i,220,1.2,75,6)<<"V"<<endl;
    return 0;
}

