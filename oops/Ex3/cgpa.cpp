#include<iostream>
using namespace std;
class Student{
    string Name;
    int Roll,Arrears;
    float GPA;
    public:
    void GetData();
    void PrintData();
    float Highest(Student S1[]);
    float Lowest(Student S1[]);
};
void Student::GetData(){
    cout<<"Enter Name: ";
    cin>>Name;
    cout<<"Enter Roll: ";
    cin>>Roll;
    cout<<"Enter GPA: ";
    cin>>GPA;
    cout<<"Enter No.of Arrears: ";
    cin>>Arrears;
}
void Student::PrintData()
{
    cout<<"Name: "<<Name<<endl;
    cout<<"Roll: "<<Roll<<endl;
    cout<<"GPA: "<<GPA<<endl;
    cout<<"No.of Arrears: "<<Arrears<<endl<<endl;
}
float Student::Highest(Student S1[])
{
    int i;
    float temp=S1[0].GPA;
    for(i=0;i<4;i++){
        if(temp<S1[i].GPA) temp=S1[i].GPA;
    }
    cout<<" Highest CGPA :"<<temp<<endl;
}
float Student::Lowest(Student S1[])
{
    int i;
    float temp=S1[0].GPA;
    for(i=0;i<4;i++){
        if(S1[i].GPA<temp) temp=S1[i].GPA;
    }
    cout<<"LOwest CGPA :"<<temp<<endl;
}
int main()
{
    Student S[4];
    int i;
    for(i=0;i<4;i++){
        S[i].GetData();
    }
    cout<<"Output: "<<endl;
    for(i=0;i<4;i++){
        S[i].PrintData();
    }
    S[0].Highest(S);
    S[0].Lowest(S);
}
