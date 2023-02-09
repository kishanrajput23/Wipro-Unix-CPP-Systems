#include<iostream>
 
using namespace std;
 
int main() {
    int X, Y, Z;
    cout<<"X\tY\tZ\tXY+Z";
    for (X=0; X<=1; X++) {
        for (Y=0; Y<=1; Y++) {
            for (Z=0; Z<=1; Z++) {
                if (X*Y+Z == 2) {
                    cout<<"\n"<<X<<"\t"<<Y<<"\t"<<Z<<"\t1";
                }
                else {
                    cout<<"\n"<<X<<"\t"<<Y<<"\t"<<Z<<"\t"<<X*Y+Z;
                }
            }
        }
    }
return 0;
}