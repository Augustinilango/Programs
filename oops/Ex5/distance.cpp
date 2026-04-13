#include<iostream>
using namespace std;
class Distance {
    int feet, inch;
public:
    Distance()
    {
       feet=0;
       inch=0;
    }
    void getdata() {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inches: ";
        cin>>inch;
    }
    void putdata() {
        cout<< "Feet: "<< feet << endl;
        cout<< "Inches: "<< inch << endl;
    }
    friend Distance add(Distance X, Distance Y);
};
Distance add(Distance x,Distance y) {
    Distance result;
    result.feet = x.feet + y.feet; 
    result.inch = x.inch + y.inch;
    result.feet += result.inch / 12;
    result.inch = result.inch % 12;
    return result; 
}
int main() {
    Distance d1,d2;
    d1.getdata();
    d2.getdata();
    d1.putdata();
    d2.putdata();
    Distance total = add(d1,d2);
    cout<<"Total Distance: "<<endl;
    total.putdata();
    return 0;
}

