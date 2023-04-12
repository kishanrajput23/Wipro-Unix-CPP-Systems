#include<iostream>
#include<math.h>
using namespace std;
long OTPGen(int input1[],int input2){
      int arr[10]={};
      int j=0;
      for(int i=0;i<input2;i++){
            int num=input1[i];
            while(num>=100){
                  arr[j++] = num%1000;
                  num = num/10;
            }
            if(input1[i] < 100){
                  arr[j++] = input1[i]; 
            }
      }
      int max_num = 0;
      int max_dig = 0;
      int min_dig = arr[0]%10;
      int len=sizeof(arr)/sizeof(arr[0]);
      for(int i =0;i<len;i++){
            int num = arr[i];
            if(max_num<num){
                  max_num = num;
            }
            while(num>0){
                  int r = num%10;
                  if(max_dig < r){
                        max_dig = r;
                  }
                  if(min_dig > r){
                        min_dig = r;
                  }
                  num/=10;
            }
      }
      if(max_num < 100){
            max_num =0;
      }
      if(max_dig == min_dig){
            max_dig = 0;
            min_dig = 0;
      }
      if((max_dig + min_dig) > 9)
            return max_num*100 + (max_dig + min_dig);
      else
            return max_num*10 + (max_dig + min_dig);
}
int main() {
      int num;
      cout<<"Enter the number array: ";
      cin>>num;
      int arr[100];
      cout<<"Enter the array: ";
      for(int i=0;i<num;i++){
            cin>>arr[i];
      }
      cout<<"My OTP is: "<<(OTPGen(arr,num))<<endl;
}
