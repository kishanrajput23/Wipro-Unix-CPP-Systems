/*
Process Two Words

You are provided a string of words and a 2-digit number. The two digits of the number represent the two words that are to be processed.
For example, If the string is "Today is a Nice Day" and the 2-digit number is 41, then you are expected to process the 4th word ("Nice") and the 1st word ("Today").

The processing of each word is to be done as follows -

Extract the Middle-to-Begin part: Starting from the middle of the word, extract the characters till the beginning of the word.

Extract the Middle-to-End part: Starting from the middle of the word, extract the characters till the end of the word.

If the word to be processed is "Nice",
Its Middle-to-Begin part will be "iN"
Its Middle-to-End part will be "ce"
So, merged together these two parts would form "iNce"

Similarly, If the word to be processed is "Today", Its Middle-to-Begin part will be "doT"
Its Middle-to-End part will be "day"
So, merged together these two parts would form "doTday"

Note: Note that the middle letter 'd' is part of both the extracted parts. So, for words whose length is odd, the middle letter should be included in both the extracted parts.

Expected output: The expected output is a string containing both the processed words separated by a space "iNce doTday"

Example:
input1 = "Today is a Nice day"
input2 = 41
output = "iNce doTday"

Example2:
input1 = "Fruits like Mango and Apple are common but Grapes are rare"
input2 = 39
output = "naMngo arGpes"

Note: The input string input1 will contain only alphabets and a single space character separating each word in the string.
Note: The input string input will NOT contain any other special characters.
Note: The input number input will always be a 2 digit number(>=11 and <=99). One of its digits will never be 0. Both the digits of the number will always point to a valid word in the input1 string.
*/

#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

char ch[50];

string convertedWords(string str) {
    int n = str.length();
    string s1 = "", s2 = "";
    
    if (n%2==0) {
        for (int i=(n/2)-1; i>=0; i--) {
            s1 += str[i];
        }
        for (int i=n/2; i<n; i++) {
            s2 += str[i];
        }
    }
    else {
        for (int i=(n/2); i>=0; i--) {
            s1 += str[i];
        }
        for (int i=n/2; i<n; i++) {
            s2 += str[i];
        }
    }
    
    string newWord = s1+s2;
    return newWord;
}

char* processWords(char* input1, int input2) {
    string str = input1;
    string word;
    vector<string> v1;
    stringstream ss(str);
    while(ss>>word) {
        v1.push_back(word);
    }
    
    int n1 = input2/10;
    int n2 = input2%10;
    
    string str1 = v1[n1-1];
    string str2 = v1[n2-1];
    
    string newWord1 = convertedWords(str1);
    string newWord2 = convertedWords(str2);
    
    string finalWord = newWord1 + " " + newWord2;
    
    for (int i=0; i<finalWord.length(); i++) {
        ch[i] = finalWord[i];
    }
    
    return ch;
}
