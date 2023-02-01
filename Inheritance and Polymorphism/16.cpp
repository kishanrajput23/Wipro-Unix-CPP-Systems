#include<iostream>
using namespace std;
/*
class A  {
  public:
   void display()  { cout << “A::display()"; }
   void display( int t) { cout << “A::display(int ) :  " << t << endl;  }
};

class D : public A{
 public:
   void display()  { cout << “D::display ()"; }
};

*/
// Ans:

class A  {
  public:
   void display()  { 
      cout << “A::display()"; 
      }
   void display( int t) {
       cout << “A::display(int ) : " << t << endl;  
      }
};

class D : public A{
   public:
   void display() { 
      cout << “D::display ()"<<endl; 
   }
};

int main(){
   D d; 
   d.display();  //this will display class d display method.
// d.display(10);  this will exhibit an error because od ambiguity 
// to resolve this we need to mention class name before method name
   d.A::display(); //this will resolve that ambiguity problem.
}