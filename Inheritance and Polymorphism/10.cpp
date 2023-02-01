#include<iostream>
using namespace std;
class Base{
      public:
      Base(int i):prot(i){

      }
      protected:
      int prot;
}
int main(){

}

/*
2nd class Der2 not valid

class Der2 : public Base {
 Der2(int k): Base(k){ }
};
*/