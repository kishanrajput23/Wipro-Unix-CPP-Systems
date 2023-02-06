#include<iostream>
#include<fstream>
#include<queue>

using namespace std;

int main() {
      queue<int> even, odd;
      int evenSum=0, oddSum=0;
      ifstream file("data.txt");
      int n;

      if(file.is_open()){
            while(file>>n) {
                  if (n%2==0) {
                        even.push(n);
                        evenSum += n;
                  }
                  else {
                        odd.push(n);
                        oddSum+=n;
                  }
            }
      }
      cout<<"Sum of all even digit : "<<evenSum<<endl;
      cout<<"Sum of all odd digit : "<<oddSum<<endl;
}