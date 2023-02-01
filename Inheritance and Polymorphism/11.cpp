#include<iostream>
using namespace std;
class Base{
      private:
      int x;
      public:
      Base(){
            x=0;
      }
      Base(int p1){
            x=p1;
      }
      void show(){
            cout<<x<<endl;
      }
};
int main(){
      Base obj;
      obj.show();
}
// if p1 called its compile time error
// When x called then it get Zero output