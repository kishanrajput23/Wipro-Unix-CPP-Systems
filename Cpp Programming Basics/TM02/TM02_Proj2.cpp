// happy numbers
#include<iostream>
#include<math.h>
using namespace std;

int happy(int n){
	int length=0,dup=0;
	int real=n;
	n=pow(n,2);
	int z=n;
	while(n>=1){
		int dup=z;
		while (dup>=1){
			length++;
			dup=dup/10;
		}
		n=z;
		z=0;
		for(int i=0;i<length;i++){
			z+=pow(n%10,2);
			n=n/10;
			dup=z;
			
		}
		n=z;
		if(z==1){
			cout<<"Happy number"<<endl;
			exit(0);
		}
		if(z==real or z<real){
			cout<<"Unhappy number"<<endl;
			exit(0);
		}
	}
	
}


int main(){
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	happy(n);
}