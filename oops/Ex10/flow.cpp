#include<iostream>
#include<vector>
using namespace std;
class Stack
{
   vector<int> data;
   int capacity;
   public:
   Stack(int c)
   {
      capacity=c;
   }
   class Stackoverflow
   {
      public:
         const char* what() const
         {
            return "stack overflow!";
         }
   };
   class Stackunderflow
   {
      public:
         const char* what() const
         {
            return "stack underflow!";
         }
   };
   class Emptystack
   {
      public:
         const char* what() const
         {
            return "empty stack!";
         }
   };
   void push(int value)
   {
      if (data.size() >= capacity)
      {
         throw Stackoverflow();
      }
      data.push_back(value);
   }
   int pop()
   {
      if (data.empty())
      {
         throw Stackunderflow();
      }
      int top = data.back();
      data.pop_back();
      return top;
   }
   int peek()
   {
      if (data.empty())
      {
         throw Emptystack();
      }
      return data.back();
   }
   bool isempty()
   {
      return data.empty();
   }
   bool isfull()
   {
      return data.size() == capacity;
   }
};
int main()
{
   Stack s(3);
   try
   {
      s.push(10);
      s.push(20);
      s.push(30);
      s.push(40);
   }
   catch (Stack::Stackoverflow &e)
   {
      cout << "Overflow :" << e.what() << endl;
   }
   try
   {
      cout << "Top :" << s.peek() << endl;
      cout << "Popped :" << s.pop() << endl;
      cout << "Popped :" << s.pop() << endl;
      cout << "Popped :" << s.pop() << endl;
      cout << "Popped :" << s.pop() << endl;
   }
   catch (Stack::Stackunderflow &e)
   {
      cout << "Underflow :" << e.what() << endl;
      throw;
   }
   catch (Stack::Emptystack &e)
   {
      cout << "Empty :" << e.what() << endl;
   }
   catch(...)
   {
      cout << "Rethrown Exception :" << endl;
   }
   return 0;
}
