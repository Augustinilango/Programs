#include<iostream>
#include<cstring>
using namespace std;
class STRING{
   char *st;
   public:
   STRING();
   STRING(const char*);
   STRING(const char* ,const char*);
   void findVowel();
   void display();
   ~STRING();
};
STRING::STRING(){
   st=new char[1];
   st[0]='\0';
}
STRING::STRING(const char* str1,const char* str2){
   st=new char[strlen(str1)+strlen(str2)+1];
   strcpy(st,str1);
   strcat(st,str2);
}
STRING::STRING(const char* str1){
   st=new char[strlen(str1)+1];
   strcpy(st,str1);
}
void STRING::findVowel(){
   char *arr,temp;
   int count=0,i=0,j=0;
   for(int i=0;st[i]!='\0';i++){
      temp=tolower(st[i]);
      if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u'){
         count++;
      }
   }
   arr=new char[count+1];
   for(int i=0;st[i]!='\0';i++){
   temp=tolower(st[i]);
   if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u'){
        arr[j]=st[i];
        j++;
   }
   }
   arr[j]='\0';
   cout<<"Vowels are: "<<"\t"<<arr<<endl;
}
STRING::~STRING(){
   delete[] st;
}
void STRING::display(){
   cout<<st<<endl;
}

int main(){
   STRING s1;
   STRING s2("Hi");
   STRING s3("Ronadlo","Messi");
   s1.display();
   s2.display();
   s3.display();
   s2.findVowel();
   s3.findVowel();
}
