#include<iostream>
using namespace std;
class Time{
      int hour, minute,second;
      public:
      int hr_to_min(){

      }
      int hr_to_sec(){

      }
};
class Logintime: private Time{

};
int main(){

}
/*
No, we can't invoke class Time by Logintime class,
In the class of time all variable is private and all the base class members will turn as private 

*/
