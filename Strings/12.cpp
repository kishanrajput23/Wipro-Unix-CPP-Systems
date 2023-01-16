#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    cout<<"You have to pass only four arguments!!"<<endl;
    
    if (argc<5) {
        cout<<"Please try again"<<endl;
    }
    else {
        for (int count=1; count<argc; count++) {
            cout<<argv[count]<<" ";
        }
    }
}
