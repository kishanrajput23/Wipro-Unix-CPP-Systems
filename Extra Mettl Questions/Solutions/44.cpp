#include<stdio.h>
#include<string.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n==0 || n==1) {
        return false;
    }
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

string sumOfPrimeDigits(int input1) {
	// Write code here
    if (input1<=0) {
        string k = "0:0";
        return k;
    }
    string str = "";
    int sum=0, first, flag=0;
    int temp = input1;
    int last = input1%10;

    while (temp>0) {
        int rem = temp%10;
        first = rem;
        if (isPrime(rem)) {
            flag = 1;
            sum += rem;
            str += to_string(rem);
        }
        temp/=10;
    }

    reverse(str.begin(), str.end());

    if (flag==1) {
        return str + ':' + to_string(sum);
    }
    else {
        return to_string(first) + ':' + to_string(last);
    }

	throw "Function sumOfPrimeDigits(int input1) not implemented. ";
}
