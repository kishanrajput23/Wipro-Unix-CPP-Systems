#include <iostream>
using namespace std;

int main() {
   string s[5], temp;
   cout<<"Enter the elements..."<<endl;

    for (int i = 0; i < 5; ++i) {
        getline(cin, s[i]);
    }
    
    for (int i=0; i<4; i++) {
        for (int j=i+1; j<5; j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "The elements in lexicographical order are... " << endl;
    for (int i=0; i<5; i++) {
        cout << s[i] << endl;
    }
    
    return 0;
}