#include <iostream>
#include <cstring>
using namespace std;
class STR 
{
   char* arr;
   public: 
   STR(const char* temp) {
      arr = new char[strlen(temp) + 1];
      strcpy(arr, temp);
    }
   STR(const STR& other) {
      arr = new char[strlen(other.arr) + 1];
      strcpy(arr, other.arr);
    }
   STR operator=(const STR& other) {
      if (this != &other) { 
	 delete[] arr;
	 arr = new char[strlen(other.arr) + 1];
	 strcpy(arr, other.arr);
      }
      return *this;
   }
   STR operator-(char input) {
      STR result(arr); 
      for (int i = 0; result.arr[i] != '\0'; i++) {
	 if (result.arr[i] == input) {
	    result.arr[i] = ' ';
	 }
      }
      return result;
   }
   void display() {
      cout << arr << endl;
   }
   ~STR() {
      delete[] arr;
   }
};
int main() {
    STR d1("Messi");
    d1.display();
    STR d2 = d1 - 's';
    d2.display(); 
    return 0;
}
