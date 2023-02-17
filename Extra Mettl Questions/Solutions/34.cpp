/*
Question : Sum of Powers of Digits (Mode 1)

Alex has been asked by his teacher to do an assignment on powers of numbers.
The assignment requires Alex to find the sum of powers of each digit of a given number, 
as per the method mentioned below.

If the given number is 582109, the Sum of Powers of Digits will be calculated as = 
= (5 raised to the power of 8) + (8 raised to the power of 2) + (2 raised to thepower of 1) + (1 raised to the power of O) + 
(0 raised to the power of 9) + (9 raised to the power of count of digits that is 6)

i.e. each digit of the number is raised to the power of the next digit on its right-side. 

Note that the right-most digit has to be raised to the power of count of digits in number.

The sum of all of these powers is the expected result to be calculated

Example - If the given number is 582109, the Sum of Powers of Digits =

= (5 raised to the power of 8) + (8 raised to the power of 2) + (2 raised to the power of 1) + (1 raised to the power of 0) + 
(0 raised to the power of 9) + (9 raised to the power of 6)

= 390625 + 64 + 2 + 1 + 0 + 531441 = 922133
*/

#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int sumOfPowerOfDigits(int input1) {
    int rev = 0;
    int count = 0;
    while(input1>0) {
        int rem = input1%10;
        rev = rev*10 + rem;
        input1/=10;
        count++;
    }

    int sum = 0;
    int n = 0;
    while (rev>0) {
        int rem = rev%10;
        rev /= 10;
        int q = rev%10;
        sum += pow(rem, q);
        n = rem;
    }
    sum +=  pow(n, count) - 1;
    
    return sum;
}



int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    cout<<sumOfPowerOfDigits(n)<<endl;

    return 0;
}
