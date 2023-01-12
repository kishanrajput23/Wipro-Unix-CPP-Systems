#include <iostream>

using namespace std;

int main()
{
    int l,r,k;
    
    cout<<"Enter the numbers : ";
    cin>>l>>r>>k;
    
    int count=0;
    
    for (int i=l; i<=r; i++) {
        if (i%k == 0) {
            count += 1;
        }
    }
    
    cout<<count;
}
