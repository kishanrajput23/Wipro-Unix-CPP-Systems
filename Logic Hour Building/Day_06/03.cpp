#include<iostream>
using namespace std;


long nthFibonacci(int input1){
    // Write code and remove the below exception.
    if (input1==1) {
		return 0;
	}
	else if (input1==2) {
		return 1;
	}
	else {
		return nthFibonacci(input1-1) + nthFibonacci(input1-2);
	}
    //throw "Function nthFibonacci(int input1) not implemented. ";
}