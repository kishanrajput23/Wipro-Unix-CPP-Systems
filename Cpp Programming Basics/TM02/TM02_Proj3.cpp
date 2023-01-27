#include<iostream>
#include<math.h>
using namespace std;

int row_num(int r){
	int temp;
	for(int i=0;i<=r;i++){
		for(int j=0;j<r-i-1;j++){
			cout<<" ";
    	}
		for(int j=i;j<2*i+1;j++){
			cout<<i+1;
			temp=j;
		}
		int j=temp;
		for(int k=j;k>i;k--){
			cout<<i+1;
		}
		
		cout<<"\n";
	}
	cout<<"press any key to coontinue...."<<endl;
	int a;
	cin>>a;
	return(a);
}

int row_num_back(int r){
	int num=r;
	for(int i=1;i<=r;i++){
	
		for(int z=r;z>i;z--){
			cout<<" ";
    	}
		for(int z=1;z<=i*2-1;z++){
			cout<<num;
		}
		num--;
		
		cout<<"\n";
	}
	cout<<"press any key to coontinue...."<<endl;
	int a;
	cin>>a;
	return(a);
}

int up_down_num(int r){
	int temp=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<r-i-1;j++){
			cout<<" ";
		}
		for(int j=0;j<i+1;j++){
			cout<<j+1;
			temp=j;
		}
		int j=temp;
		for(int k=j;k>0;k--){
			cout<<k;
		}
		cout<<"\n";
	}
	cout<<"press any key to coontinue...."<<endl;
	int a;
	cin>>a;
	return(a);
	
}

int up_num_down_alpha(int r){
	int temp=0;
	char arr[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for(int i=0;i<r;i++){
		for(int j=0;j<r-i-1;j++){
			cout<<" ";
		}
		for(int j=0;j<i+1;j++){
			cout<<j+1;
			temp=j;
		}
		int j=temp;
		for(int k=j;k>0;k--){
			cout<<arr[k-1];
		}
		cout<<"\n";
	}
	cout<<"press any key to coontinue...."<<endl;
	int a;
	cin>>a;
	return(a);
}

int alpha_num_alter(int r){
	char arr[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for(int i=0;i<r;i++){
		for(int k=0;k<r-i-1;k++){
			cout<<" ";
		}
		for(int j=0;j<i+1;j++){
			if((j+1)%2==0){
				cout<<j+1;
			}
			else{
				cout<<arr[j];
			}
		}
		for(int j=i+1;j>1;j--){
			if((j-1)%2==0){
				cout<<j-1;
			}
			else{
				cout<<arr[j-2];
			}
		}
		cout<<"\n";
	}
	cout<<"press any key to coontinue...."<<endl;
	int a;
	cin>>a;
	return(a);
	
	
}

int consective_series(int r){
	int arr[]={1,2,3,4,5,6,7,8,9,0};
	int c=0,x=1;
	for(int i=0;i<r;i++){
		for(int j=r;j>i;j--){
			cout<<" ";
		}
		for(int j=0;j<x;j++){
			cout<<arr[c%10];
			c+=1;
		}
		x+=2;
		cout<<"\n";
	}
	cout<<"press any key to coontinue...."<<endl;
	int a;
	cin>>a;
	return(a);
}

int row_num_up_down(int r){
	int temp=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<r-i-1;j++){
			cout<<" ";
		}
		for(int j=i;j<2*i+1;j++){
			cout<<j+1;
			temp=j;
		}
		int j=temp;
		for(int k=j;k>i;k--){
			cout<<k;
		}
		cout<<"\n";
	}
	cout<<"press any key to coontinue...."<<endl;
	int a;
	cin>>a;
	return(a);
	
}
int diamond_alpha_num(int r){
	int temp;
	char arr[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for(int i=0;i<r;i++){
		for(int j=0;j<r-i-1;j++){
			cout<<" ";
    	}
		for(int j=i;j<2*i+1;j++){
			cout<<i+1;
			temp=j;
		}
		int j=temp;
		for(int k=j;k>i;k--){
			cout<<i+1;
		}
		
		cout<<"\n";
	}
	for(int i=r-1;i>0;i--){
		for(int j=0;j<r-i;j++){
			cout<<" ";
    	}
		for(int j=0;j<2*i-1;j++){
			cout<<arr[i-1];
			temp=j;
		}
		cout<<"\n";
	}
	cout<<"press any key to coontinue...."<<endl;
	int a;
	cin>>a;
	return(a);
	
	
}

int diamond_alpha_star(int r){
	int temp;
	for(int i=0;i<r;i++){
		for(int j=0;j<r-i-1;j++){
			cout<<" ";
    	}
    	int x=1;
		for(int j=i;j<(2*i)+1;j++){
			cout<<x;
	        x+=1;
			temp=j;
		}
		int j=temp;
		for(int k=j;k>i;k--){
			cout<<"*";
		}
		
		cout<<"\n";
	}
	for(int i=r-1;i>0;i--){
		for(int j=0;j<r-i;j++){
			cout<<" ";
    	}
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		for(int j=0;j<i;j++){
			cout<<i-j;
		}
		cout<<"\n";
	}
	cout<<"press any key to coontinue...."<<endl;
	int a;
	cin>>a;
	return(a);
	
}

int main(){
	int n,r;
	int arr[10];
	jump:
	
	cout<<"___________________** MAIN MENU **___________________"<<endl;
	cout<<"1. Row Numers"<<endl<<"2. Row Numbers Backwards"<<endl<<"3. Up Down Numbers"<<endl<<"4. Up Numbers Down Alphabets"<<endl<<"5. Alpha Numeric Alternate"<<endl<<"6. Consecutive series"<<endl<<"7. Row Number Up Down"<<endl<<"8. Diamond Alpha Numeric"<<endl<<"9. Diamond Alpha Star"<<endl<<"10. SET ROW_LEVEL"<<endl<<"0. EXIT"<<endl;
	cout<<"Enter your option from (1 to 10) (0 to exit): ___";
	cin>>n;
	switch(n){
		case 1:
			row_num(r);
			goto jump;
			break;
		case 2:
			row_num_back(r);
			goto jump;
			break;
		case 3:
			up_down_num(r);
			goto jump;
			break;
		case 4:
			up_num_down_alpha(r);
			goto jump;
			break;
		case 5:
			alpha_num_alter(r);
			goto jump;
			break;
		case 6:
			consective_series(r);
			goto jump;
			break;
		case 7:
			row_num_up_down(r);
			goto jump;
			break;
		case 8:
			diamond_alpha_num(r);
			break;
		case 9:
			diamond_alpha_star(r);
			goto jump;
			break;
		case 10:
			cin>>r;
			goto jump;
			break;
		case 0:
			exit(0);
			break;
	}


}