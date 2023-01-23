#include<iostream>
#include"factorial.h"

using namespace std;

int main() {
  int num;
  cout<<"The Factorial Program"<<endl;
  
  cout<<"Enter a number : ";
  cin>>num;
  
  cout<<"The factorial of "<<num<<" is "<<factorial(num)<<endl;
  
  return 0;
}
