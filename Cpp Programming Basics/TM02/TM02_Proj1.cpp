#include<iostream>
using namespace std;
int n,flag=1;
int prime_num(int i){
	int flag=1;
	for(int j=2;j<i;j++){
		if(i%j==0){
			flag=0;
			break;
		}
	}
	if(flag==1){
		return 1;
	}		
}
int main()
{
	int a,n,k=0,check=0;
	cout<<"Enter no of numbers : "<<endl;
	cin>>n;
	int ar[n];
	cout<<"Enter the numbers"<<endl;
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	cout<<"the prime pairs are :"<<endl;
	for(int z=0;z<n;z++){
		// starts
		jump:
		a=ar[z];
		int arr[a];
	for(int i=2;i<a;i++){
		check=prime_num(i);
		if(check==1){
			arr[k]=i;
			k++;
		}
	}
	// pair starts
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			if((arr[i]+arr[j])==a){
				cout<<a<<" "<<arr[i]<<"  "<<arr[j]<<endl;
				//exit(0);
				z++;
				goto jump;
			}
		}
	}
	}
}