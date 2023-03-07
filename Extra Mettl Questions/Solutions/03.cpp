#include<stdio.h>
#include<string.h>
#include<iostream>
#include<cstring>
#include<sstream>
#include<math.h>

using namespace std;

char ch[20];

char* addNumberStrings(char* input1, char* input2) {
    char* ch1 = input1;
    char* ch2 = input2;

    string str1="", str2="";
    
    for (int i=0; i<strlen(input1); i++) {
        str1 += ch1[i]; 
    }

    for (int i=0; i<strlen(input2); i++) {
        str2 += ch2[i];
    }

    int num1, num2;
    stringstream ss, ss1, ss2;
    ss1<<str1;
    ss1>>num1;

    ss2<<str2;
    ss2>>num2;

    int num3 = num1+num2;

    string str;
    ss<<num3;
    ss>>str;

    for (int i=0; i<str.length(); i++) {
        ch[i] = str[i];
    }

    return ch;
     
    throw "Function addNumberStrings(char* input1,char* input2) not implemented. ";
}