#include <iostream>
using namespace std;


int main() {
	int r, c;
	
	cout<<"Enter the number of rows : ";
	cin>>r;
	
	cout<<"Enter the number of columns : ";
	cin>>c;
	
	int arr[r][c];
	
	cout<<"Now enter the elements of the array below : "<<endl;
	
	for (int i=0; i<r; i++) {
	    for (int j=0; j<c; j++) {
	        cin>>arr[i][j];
	    }
	}
	
	cout<<"Here're the elements you have entered : "<<endl;
	
	for (int i=0; i<r; i++) {
	    for (int j=0; j<c; j++) {
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	cout<<"Now the array has been deleted."<<endl;
	
	delete[] arr;
}