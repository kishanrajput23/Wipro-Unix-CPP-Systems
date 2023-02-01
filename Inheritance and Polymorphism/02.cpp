#include<iostream>
using namespace std;
class Base{
      public:
      void pub_base_fun();

      protected:
      int prot_var;
      void prot_base_fun(){
            cout<<"protected base Function called... "<<endl;
      }

      private:
      int priv_base_var;

};

class Der1:public Base{
      public:
      void pub_der1_fun();

      protected:
      int prot_var;
      void prot_der1_fun(){
            cout<<"protected der1 Function called... "<<endl;
      }

      private:
      int priv_der1_var;
      public:
      Der1(int a=0,int b=0,int c=0)
        {
            Der1::prot_var=a;
            priv_der1_var=b;
            Base::prot_var=c;
            prot_base_fun();
        }

};

class Der2:public Base{
      public:
      void pub_der2_fun();

      protected:
      int prot_var;

      void prot_der2_fun(){
            cout<<"protected der2 Function called... "<<endl;
      }

      private:
      int priv_der2_var;

     public:
     Der2(int a=0,int b=0,int c=0)
     {
      Der2::prot_var=a;
      priv_der2_var=b;
      Base::prot_var=c;
      prot_base_fun();
     }

};
void Base::pub_base_fun()
{
    cout<<"public base Function called "<<endl;
}

void Der1::pub_der1_fun()
{
    cout<<"public Derived Function 1 called "<<endl;
}

void Der2::pub_der2_fun()
{
    cout<<"public Derived Function 2 called "<<endl;
}
int main(){
      Der1 d1(1,2,3);
      Der2 d2(4,5,6);
      d1.pub_base_fun();
      d1.pub_der1_fun();
      d2.pub_base_fun();
      d2.pub_der2_fun();

}