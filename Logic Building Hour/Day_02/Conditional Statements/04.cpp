#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cout<<"Enter two integer numbers: ";
	cin>>n1>>n2;

    int sum=n1+n2;
	
	if(sum%2==0)
		cout<<sum<<" is an EVEN number."<<endl;
	else
		cout<<sum<<" is an ODD number."<<endl;
	
	return 0;
}