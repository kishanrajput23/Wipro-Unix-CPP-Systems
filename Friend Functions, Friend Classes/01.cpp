#include<iostream>
using namespace std;

class Date {
    int d1,d2;

    public:
    Date(int d) {
        d1=d;
    }
    
    friend void operator + (Date &D){
        D.d2=D.d1+1;
        cout<<D.d2<<endl;
    }
};

int main(){
      int date;
      cout<<"Enter the date : ";
      cin>>date;
      Date D(date);
      +D;

}