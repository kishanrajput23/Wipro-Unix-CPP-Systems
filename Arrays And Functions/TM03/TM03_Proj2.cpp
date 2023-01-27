#include<iostream>
using namespace std;

void identify_heavy(int arr[3][3]){
	int s1,s2;
	s1=arr[0][0]+arr[0][2]+arr[2][0]+arr[2][2];
	s2=arr[0][1]+arr[1][0]+arr[1][2]+arr[2][1];
	if(s1>s2){
		cout<<"1"<<endl;
	}
	else if(s2>s1){
		cout<<"2"<<endl;
	}
	else{
		cout<<"3"<<endl;
	}
}


int main(){
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	
	identify_heavy(arr);
}