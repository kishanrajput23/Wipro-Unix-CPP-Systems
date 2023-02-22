#include<stdio.h>
#include<string.h>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

char ch[20];

char* userIdGeneration(char* input1, char* input2, int input3, int input4) {
	  // Write code here
    int l1 = strlen(input1);
    int l2 = strlen(input2);
    string sort, large;
    if(l1>l2) {
        sort = input2;
        large = input1;
    }
    else if (l1==l2) {
        int cnt = 0;
        for (int i=0; i<l1; i++) {
            if (input1[i]!=input2[i]) {
                break;
            }
            else {
                cnt += 1;
            }
        }
        if (input1[cnt]>input2[cnt]){
            sort = input2;
            large = input1;
        }
        else {
            sort = input1;
            large = input2;
        }
    }
    else {
        sort = input1;
        large = input2;
    }

    string str="";
    str += sort[sort.length()-1] + large;

    for (int i=0; i<str.length(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else {
            str[i] = tolower(str[i]);
        }
    }
    string num;
    stringstream ss;
    ss<<input3; 
    ss>>num;
    str = str + num[input4-1] + num[num.length()-input4];

    for (int i=0; i<str.length(); i++) {
        ch[i] = str[i];
    }
    return ch;
}
