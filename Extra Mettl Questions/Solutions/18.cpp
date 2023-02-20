#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

struct Result {
    string output1;
    string output2;
    string output3;
};

struct Result encodeThreeStrings(string input1, input2, string input3) {

	// Write code here
    struct Result r;
    string str1="", str2="", str3="";
    string f1 = "", f2="", f3="", m1="", m2="", m3="", e1="", e2="", e3="";
    int lenf1, lenm1, lene1, lenf2, lenm2, lene2, lenf3, lenm3, lene3;
    int n1 = input1.length();
    int rem = n1%3;
    if (rem == 0) {
        lenf1 = n1/3;
        lenm1 = 2*(n1/3);
        lene1 = 2*(n1/3);
    }
    else if (rem == 2) {
        lenf1 = (n1/3)+1;
        lenm1 = 2*(n1/3)+1;
        lene1 = (2*(n1/3)) + 1;
    }
    else {
        lenf1 = n1/3;
        lenm1 = 2*(n1/3)+1;
        lene1 = (2*(n1/3)) + 1;
    }

    for (int i=0; i<lenf1; i++) {
        f1 += input1[i];
    }

    for (int i=lenf1; i<lenm1; i++) {
        m1 += input1[i];
    }

    for (int i=lenm1; i<n1; i++) {
        e1 += input1[i];
    }

    int n2 = input2.length();
    int rem2 = n2%3;
    if (rem2 == 0) {
        lenf2 = n2/3;
        lenm2 = 2*(n2/3);
        lene2 = 2*(n2/3);
    }
    else if (rem2 == 2) {
        lenf2 = (n2/3)+1;
        lenm2 = 2*(n2/3)+1;
        lene2 = (2*(n2/3)) + 1;
    }
    else {
        lenf2 = n2/3;
        lenm2 = 2*(n2/3)+1;
        lene2 = (2*(n2/3)) + 1;
    }

    for (int i=0; i<lenf2; i++) {
        f2 += input2[i];
    }

    for (int i=lenf2; i<lenm2; i++) {
        m2 += input2[i];
    }

    for (int i=lenm2; i<n2; i++) {
        e2 += input2[i];
    }
    
    int n3 = input3.length();
    int rem3 = n3%3;
    if (rem3 == 0) {
        lenf3 = n3/3;
        lenm3 = 2*(n3/3);
        lene3 = 2*(n3/3);
    }
    else if (rem3 == 2) {
        lenf3 = (n3/3)+1;
        lenm3 = 2*(n3/3)+1;
        lene3 = (2*(n3/3)) + 1;
    }
    else {
        lenf3 = n3/3;
        lenm3 = 2*(n3/3)+1;
        lene3 = (2*(n3/3)) + 1;
    }

    for (int i=0; i<lenf3; i++) {
        f3 += input3[i];
    }

    for (int i=lenf3; i<lenm3; i++) {
        m3 += input3[i];
    }

    for (int i=lenm3; i<n3; i++) {
        e3 += input3[i];
    }
    
    str1 = f1 + f2 + f3;
    str2 = m1 + m2 + m3;
    str3 = e1 + e2 + e3;
    
    for (int i=0; i<str3.length(); i++) {
        if (isupper(str3[i])) {
            str3[i] = tolower(str3[i]);
        }
        else {
            str3[i] = toupper(str3[i]);
        }
    }

    r.output1 = str1;
    r.output2 = str2;
    r.output3 = str3;

    return r;
	throw "Function encodeThreeStrings(string input1,string input2,string input3) not implemented. ";
}
