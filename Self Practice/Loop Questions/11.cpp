#include<iostream>
using namespace std;

int main() { 
    int amt, r2000=0, r500=0, r100=0, r50=0, r20=0, r10=0, r5=0, r2=0 , r1=0 ,count=0; 

    cout<<"Enter The Amount in Rupees : "; 
    cin>>amt; 
  
    while(amt >= 2000)  { 
        r2000 = amt / 2000 ; 
        amt = amt % 2000;
        cout<<"Total Number Of 2000 Rupees Notes : "<<r2000<<endl;
        break; 
    }
  
    while(amt >= 500) { 
        r500 = amt / 500 ; 
        amt = amt % 500;
        cout<<"Total Number Of 500 Rupees Notes : "<<r500<<endl;
        break; 
    }
    
    while(amt >= 100) { 
        r100 = amt / 100 ; 
        amt = amt % 100;
        cout<<"Total Number Of 100 Rupees Notes : "<<r100<<endl;
        break; 
    }
    
    while(amt >= 50) { 
        r50 = amt / 50 ;
        amt = amt % 50; 
        cout<<"Total Number Of 50 Rupees Notes : "<<r50<<endl;
        break; 
    }  
  
    while(amt >= 20) { 
        r20 = amt / 20 ; 
        amt = amt % 20;
        cout<<"Total Number Of 20 Rupees Notes : "<<r20<<endl;
        break; 
    }  
  
    while(amt >= 10) { 
        r10 = amt / 10 ; 
        amt = amt % 10;
        cout<<"Total Number Of 10 Rupees Notes Or Coin : "<<r10<<endl;
        break; 
    } 
  
    while(amt >= 5) { 
        r5 = amt / 5 ; 
        amt = amt % 5;
        cout<<"Total Number Of 5 Rupees Notes Or Coin : "<<r5<<endl;
        break; 
    } 
  
    while(amt >= 2) { 
        r2 = amt / 2 ; 
        amt = amt % 2;
        cout<<"Total Number Of 2 Rupees Notes Or Coin : "<<r2<<endl;
        break; 
    } 
  
    while(amt >= 1) { 
        r1 = amt / 1 ; 
        amt = amt % 1;
        cout<<"Total Number Of 1 Rupees Note Or Coin : "<<r1<<endl;
        break; 
    }
    
    count = r2000 + r500 + r100 + r50 + r20 + r10 + r5 + r2 + r1;   
    cout<<"Total Number Of Notes Require : "<<count<<endl;
    
    return 0;  
}