#include<stdio.h>
#include<string.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

string createRequiredString(int input1) {
    // Write code here
    string str = "";
    if (input1==0) {
        str += "pz";
    }
    else if (input1>0) {
        str += "p";
    }
    else {
        str += "n";
        input1 *= -1; 
    }

    while (input1>0) {
        int rem = input1%10;
        if (rem==0) {
            str += "z";
        }
        else if (rem%2==0) {
            str += "e";
        }
        else {
            str += "o";
        }
        input1/=10;
    }
    reverse(str.begin()+1, str.end());
    return str;
	throw "Function createRequiredString(int input1) not implemented. ";
}
