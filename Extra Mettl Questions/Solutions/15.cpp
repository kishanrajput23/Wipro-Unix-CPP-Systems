#include <math.h>

int len=strlen(input1);
 int i=0,j=0;
 int sum=0;
 int arr[10]={};
 while(len>i){
 int num=input1[i]-'0';
 sum=num;
 i++;
 if(i==len){
 arr[j]=sum;
 j++;
 break;
 }
 if(num%2!=0){
 while(sum%2!=0){
 sum+=input1[i]-'0';
 i++;
 if(i==len){
 break;
 }
 }
 arr[j]=sum;
 j++;
 }else{
 while(sum%2==0){
 sum+=input1[i]-'0';
 i++;
 if(i==len){
 break;
 }
 }
 arr[j]=sum;
 j++;
 
 }
 }
 int ans=arr[0];
 for(int i=1;i<j;i++){
 int p=log10(arr[i])+1;
 int temp=pow(10,p);
 ans=ans*temp+arr[i];
 }
 
 return ans;
