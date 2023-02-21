/*
Question : ASCII_Sum

Write a program to find sum of ascii values of first and last character from a given string.

Note: Except alphabets, If the string has any other character including space, then output should be 1.

Assumptions:
1) There will be atleast 2 characters in the string.
2) Given string can have both uppercase and lowercase characters

Example 1:
Input : Malayalam
Output : 186

Explanation:
In the given string Malayalam, 'M' and 'm' are first & last characters of the
string, whose
ascii values are 77 & 109 respectively. Sum of these ascii value would be 186

Example 2:
Input : fruits are good
Output : 1

Explanation: As there are spaces in the given string, output would be 1

Example 3:
Input : aaaaaa
Output : 194

Explanation : First and last character of the string is 'a'. Ascii value of 'a' is
97.
*/

int findASCIISum(string input1) {
	// Write code here
    int flag = 0;
    for (int i=0; i<input1.length(); i++) {
        if (input1[i]==' ') {
            flag = 1;
            break;
        }
        if (!isalpha(input1[i])) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        return 1;
    } 
    else {
        int a = int(input1[0]);
        int b = int(input1[input1.length()-1]);
        return a+b;
    }
	throw "Function findASCIISum(string input1) not implemented. ";
}
