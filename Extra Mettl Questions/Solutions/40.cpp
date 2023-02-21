#include<stdio.h>
#include<string.h>
#include<string>

using namespace std;

struct Result {
    Result() : output1() {};
    int output1[100];
};

struct Result FindTotalShops(int input1, int input2[], int input3, int input4[]) {
	// Write code here
    struct Result r;
    for (int i=0; i<input3; i++) {
        for (int j=0; j<input1; j++) {
            if (input4[i]>= input2[j]) {
                r.output1[i] += 1;
            }
        }
    } 
    return r;
	throw "Function FindTotalShops(int input1,int input2[],int input3,int input4[]) not implemented. ";
}
