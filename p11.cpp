#include<iostream>
using namespace std;
class code
{
   int x;
   public:
   code(){ 
   cout<<"default constructor is called\n"; 
   }
   code(int a){ 
   x=a;
   cout<<"x value is assigned to "<<x<<"\n";
   }
   code(code &copy)
   {
     x=copy.x;
     cout<<"copy constructor assigns x value to "<<x<<"\n";
   }
   void display()
   {
     cout<<"Value of x:"<<x;
   }

};

int main()
{
  code ob1;
  
  code ob2(10);
  code ob3(ob2);
return 0;
}
