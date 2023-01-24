#include <iostream>
using namespace std;

int main() {
	int r,c,a,b;
	
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
	
	cout<<"Do you want to increase the size of this array ==> if yes input 'y' else input 'n' : ";
	
	char ans;
	cin>>ans;
	
	if (ans=='y') {
	    
	    cout<<"Enter the number of rows to be added : ";
	    cin>>a;
	    
	    cout<<"Enter the number of columns to be added : ";
	    cin>>b;
	    
	    int arr1[r + a][c + b];
	    
	    for (int i=0; i<r+a; i++) {
	        for (int j=0; j<c+b; j++) {
	            if (i>= r || j>=c) {
	                arr1[i][j] = 0;
	            }
	            else {
	                arr1[i][j] = arr[i][j];
	            }
	        }
	    }
	}
	else {
	    cout<<"Program Ends..."<<endl;
	}
	
	int arr1[a+r][b+c];
	
	cout<<"New array elements are : "<<endl;
	
	for (int i=0; i<r+a; i++) {
	    for (int j=0; j<c+b; j++) {
	        cout<<" "<<arr1[i][j];
	    }
	    cout<<endl;
	}
	return 0;
}