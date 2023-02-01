#include<iostream>
using namespace std;
class Vehicles{
      public:
      int fw,car;
      Vehicles(int f=15,int c=10){
            this->fw=f;
            this->car=c;
      }
      ~Vehicles(){
            cout<<"Destructors called..."<<endl;
      }
};
class Fout_Wheelers: public Vehicles{
      public:
      void display(){
            cout<<"Enter Number how many Four Wheeler Available:"<<fw<<endl;
      }

};
class Cars: public Fout_Wheelers{
      public:
      int sedan,suv;
      Cars(int a=5, int b=5){
            this->sedan=a;
            this->suv=a;
      }
      void display(){
         cout<<"Cars availabe is: "<<car<<endl;
      }

};
class Sedan: public Cars{
      public:
      void display(){
            cout<<"Sedan Available: "<<sedan<<endl;

      }

};
class SUV: public Cars{
      public:
      void display(){
            cout<<"SUV Available: "<<suv<<endl;
      }

};
int main(){
      Sedan obj1;
      SUV obj2;
      obj1.Fout_Wheelers::display();
      obj2.Cars::display();
      obj1.display();
      obj2.display();

}