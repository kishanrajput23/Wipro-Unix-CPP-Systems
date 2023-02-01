#include<iostream>
using namespace std;
class A  {
 protected:
  int data; 
public: 
 A(int x):data(x) {}
};

class D : public A  {
   int data;
public:
   D(int x, int y):A(x),data(y) {

      } 
   int getdata(){ 
      return data; 
   }
};
int main(){
      D d(30,20);
      cout<<d.getdata()<<endl;
}


/*
What will be the output of the following?
cout << d.getdata();

Ans: output is 20
*/

