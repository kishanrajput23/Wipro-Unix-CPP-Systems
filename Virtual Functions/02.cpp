#include<iostream>
using namespace std;

class Vehicles{
    public:
        Vehicles(){
            cout<<"Vehicles Called"<<endl;
        }
       
       
};
class FourWheelers:public Vehicles{
    public:
        FourWheelers(){
            cout<<"FourWheelers Called "<<endl;
        }
};
class Car:public FourWheelers{
    public:
        Car(){
            cout<<"Car Called "<<endl;
        }
       /***  void show(Car cref){
            cout<<"Reference is created "<<endl;
        }   **/
};
class Sedan:public Car{
    public:
        Sedan(){
            cout<<"Sedan Called "<<endl;
        }
        void show(Car& cref){
            cout<<"Reference is created "<<endl;
        }
};
class SUV:public Car{
    public:
        SUV(){
            cout<<"SUV Called "<<endl;
        }
       void show(Car& cref){
            cout<<"Reference is created "<<endl;
        }
};
int main(){
    Vehicles v;
    FourWheelers fw;                    
    //fw.show(v);         /***     Successfully Passed -> Sedan,Suv           */
  

    Car c;
    
    Sedan s;
    s.show(c);
    SUV suv;
    suv.show(c);

    return 0;
}