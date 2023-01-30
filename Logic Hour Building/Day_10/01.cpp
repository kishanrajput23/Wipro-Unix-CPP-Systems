#include<iostream>
using namespace std;

char* secondWordUpperCase(char* input1) {
    char *p = strtok(input1," ");
    p = strtok(NULL," ");
    int i;
    
    if (p!=NULL) {
        for (i=0; p[i]!=NULL; i++) {
            if (p[i]>='a' && p[i]<='z') {
                p[i] = p[i]-32;
            }
        }
        return p;
    }
    else
        return "LESS";
}