#include<stdio.h>
#include<string.h>
#include<string>

using namespace std;
string findCharsOrDigitSum(string input1, int input2) {
	  // Write code here
    if (input1.length()==0 && input2==1) {
        return "NULL";
    }
    int sum = 0;
    if (input2==0) {
        int flag = 0;
        for (int i=0; i<input1.length(); i++) {
            if (input1[i]>= '0' && input1[i]<='9') {
                flag = 1;
                sum += input1[i] - '0';
            }
        }
        if (flag == 0) {
            return "ZERO";
        }
        else {
            return to_string(sum);
        }
    }
    else {
        string str = "";
        for (int i=0; i<input1.length(); i++) {
            if(!isdigit(input1.at(i))) {
                str += input1.at(i);
            }
        }

        if (str.length()==0) {
            return "ZERO";
        }
        else {
            return str;
        }
    }
	throw "Function findCharsOrDigitSum(string input1,int input2) not implemented. ";
}
