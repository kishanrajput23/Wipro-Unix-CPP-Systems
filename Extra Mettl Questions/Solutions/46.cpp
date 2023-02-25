#include<stdio.h>
#include<string.h>
#include<cstring>
#include<algorithm>
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

char ch1[20];

bool isPart1Valid(string p1) {
    for (int i=0; i<p1.length(); i++) {
        if (!islower(p1[i]) && !isalnum(p1[i])) {
            return false;
        }
    }
    return true;
}

bool isPart2Valid(string p2) {
    for (int i=1; i<p2.length(); i++) {
        if (!islower(p2[i])) {
            return false;
        }
    }
    return true;
}

bool isPart3Valid(string p3) {
    if (p3!=".com") {
        return false;
    }
    return true;
}

char* checkEmail(char* input1) {
	// Write code and remove the below exception.
    int n = strlen(input1);
    char* ch = input1;
    string  str = "", part1="", part2="", part3="";
    int cnt1=0, cnt2=0;

    for (int i=0; i<n; i++) {
        if (ch[i]=='@') {
            break;
        }
        else {
            part1 += ch[i];
            cnt1++;
        }
    }
    
    for (int i=cnt1; i<n; i++) {
        if (ch[i]=='.') {
            break;
        }
        else {
            part2 += ch[i];
            cnt2++;
        }
    }

    for (int i=cnt1+cnt2; i<n; i++) {
        part3 += ch[i];
    }

    if (part1.length()>15) {
        str +=  part1 + ":" + part2 + ":invalid";
    }

    else if ((!isPart1Valid(part1)) || (!isPart2Valid(part2)) || (!isPart3Valid(part3))) {
        str += part1 + ":" + part2 + ":invalid";
    }

    else {
        str += part1 + ":" + part3 + ":valid";
    }

    for (int i=0; i<str.length(); i++) {
        ch1[i] = str[i];
    }
    return ch1;
    
    throw "Function checkEmail(char* input1) not implemented. ";
}
