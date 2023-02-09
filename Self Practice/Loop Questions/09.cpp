#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int gcd = 1, lcm = 1;  

    cout<<"Enter the two numbers you want to find the GCD and LCM of : ";
    cin>>n1>>n2;

    for (int i=1; i<1000; i++) {
        if ((n1 % i == 0) && (n2 % i == 0)) {
            gcd = i;          
        }
    }

    lcm = (n1 * n2) / gcd;

    cout<<"The GCD of the two numbers : " << n1 << " and " << n2 << " is : " << gcd<<endl;
    cout<<"The LCM of the two numbers : " << n1 << " and " << n2 << " is : " << lcm <<endl;

    return 0;
}