#include<iostream>
#include<math.h>

string isStepNumber(int input1)  {
	// Write code here
    if (input1>=0 && input1<=9) {
        return to_string(input1)+"-false";
    }
	int n = log10(input1)+1;
    int count = n;
    int arr[n];
    int temp = input1;

    while (temp>0) {
        arr[n-1] = temp%10;
        temp/=10;
        n--;
    }

    int flag = 0;
    for (int i=0; i<count-1; i++) {
        if (arr[i]-arr[i+1]!=1 && arr[i]-arr[i+1]!=-1) {
            flag = 1;
            break;
        }
    }

    if (flag ==0) {
        return to_string(input1)+"-true";
    }
    else {
        return to_string(input1)+"-false";
    }
}
 
