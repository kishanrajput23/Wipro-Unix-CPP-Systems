#include <iostream>
using namespace std;

enum WEEK {
    Sunday=0, Monday=1, Tuesday=2, Wednesday=3, Thrusday=4, Friday=5, Saturday=6
};

int main() {
    int DailyWeight[7];
    
    for (int i=Sunday; i<= Saturday; i++) {
        cout<<"Enter your body weight for day "<<i<<" : ";
        cin>>DailyWeight[i];
    }
    
    cout<<"Your body weight on tuesday is : "<<DailyWeight[Tuesday]<<endl;
    cout<<"Your body weight on thrusday is : "<<DailyWeight[Thrusday]<<endl;
    
    return 0;
}