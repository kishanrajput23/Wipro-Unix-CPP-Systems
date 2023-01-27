#include<iostream>
using namespace std;

int reduce(int y){
	int length_n=0,sum=0,num=y;
	while (num>0){
		length_n++;
		num=num/10;	
	}
	while(length_n>0){
		sum+=(y%10);
		y=y/10;
		length_n--;	
	}
	if(sum>9){
		reduce(sum);
	}
	else{
		return sum;
	}
}

int main()
{
	int a,n,k=0,check=0,temp=0,flag=0,s=0,spot=0,prav=0,p=0;
	cout<<"Enter no of numbers : "<<endl;
	cin>>n;
	int ar[n];
	int arr4[s];
	int arr5[p];
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	jump:
	// ascending order
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (ar[i]>ar[j]){
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
				
			}
		}
	}
	
	// removing duplicates in the array
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ar[i]==ar[j]){
				while(j<n){
				ar[j]=ar[j+1];
				j++;
				check=1;
				}
				if(check==1){
					--n;	
				}
			}
		}
		
	}
	
	//reducing the values
	for(int i=0;i<n;i++){
		if(ar[i]>9){
			
			ar[i]=reduce(ar[i]);
		}
	}
	if(flag==0){
		flag=1;
		goto jump;
	}
	
	// removing zeroes
	for(int i=0;i<n;i++){
			if(ar[i]==0){
				while(i<n){
					ar[i]=ar[i+1];
					i++;
					check=1;
				}
				if(check==1){
					--n;	
				}
			}
		}
	
	// adding any two elements is removed
	for(int z=0;z<n;z++){
		int spot=0;
		for(int i=0;i<n;i++){
			if(z==i){
				i++;
			}
			for(int j=0;j<n;j++){
				if(i==j){
					j++;
				}
				if((ar[i]+ar[j])==ar[z] and ar[i]!=0 and ar[j]!=0){
					spot++;
					
				}
			}
		}
		if(spot==0){
			arr4[s]=ar[z];
			s++;
		}
	}
	
	//square removed
	for(int i=0;i<s;i++){
		int prav=0;
		for(int y=0;y<s;y++){
			if(i==y){
				y++;
			}
			if(arr4[i]==arr4[y]*arr4[y]){
				prav++;
				
			}
		}
		if(prav==0){
			arr5[p]=arr4[i];
			p++;
		}
	}
	
	for(int i=0;i<p;i++){
		cout<<arr5[i]<<" ";
	}
	
}