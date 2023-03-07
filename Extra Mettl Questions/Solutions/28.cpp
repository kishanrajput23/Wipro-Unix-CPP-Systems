/*
Question : Minimun number of digits to be added to form plaindrome.

Example 1 : if input1 = 6272, one digit (either 6 or 7) needs to be added so that a
palindrome can be formed with the entire set of digits. So, the output should be 1.

Example 2 : if input1 = 789, two digits (either 7 and 8 or 7 and 9 or 8 and 9) needs to be added so that a
palindrome can be formed with the entire set of digits. So, the output should be 2.

Example 3 : if input1 = 68, any one digit (either 6 or 8) needs to be added so that a
palindrome can be formed with the entire set of digits. So, the output should be 1.

Example 4 : if input1 = 110, zero digits needs to be added, because all the existing digits can already a
palindrome. So, the output should be 0.

Example 5 : if input1 = 6, zero digits needs to be added, because 6 already a single digit
palindrome. So, the output should be 0.
*/

#include<iostream>
using namespace std;

int main()
{
    int input1;
    cout<<"Enter the number : ";
    cin>>input1;
    
    int a[10];
    int k=0;
    int temp = input1;
    int count = 0;
    while(temp>0) {
        int rem = temp%10;
        a[rem] += 1;
        temp/=10;
    }
    
    for (int i=0; i<10; i++) {
        if (a[j]%2!=0) {
            count++;
        }
    }
    
    cout<<count-1<<endl;
}
