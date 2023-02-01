#include<iostream>
using namespace std;
/*
Given in program
class A  {
 public: 
  void display(){  
      cout << “A::display” ;  
      } 
};

class D : public A {
 public:
  void display(){
        cout << “D::display” ;  
        } 
};

*/

// Ans

class A  {
 public: 
  void display(){ 
       cout << "A::display" ;  
       } 
};

class D : public A {
 public:
  void display(){
        cout << "D::display"<<endl ;  
        
} 

};

int main(){ 
      D d;
      d.A::display();
}

 //to resolve ambiguity we need to mention class name 
//before method name.

