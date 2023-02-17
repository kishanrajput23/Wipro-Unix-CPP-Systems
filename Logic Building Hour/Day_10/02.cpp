#include<stdio.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>

int isPalindrome(char* input1) {
	// Write code and remove the below exception
		int len = strlen(input1);
		int flag = 0;
		for (int i=0; i<len; i++) {
			if (tolower(input1[i]) != tolower(input1[len-i-1])) {
				flag =1;
				break;
			}
		}
		if (flag == 0) {
			return 2;
		}
		return 1;
    throw "Function isPalindrome(char* input1) not implemented. ";
}