#include<iostream>
#include<sstream>
using namespace std;
int mystrcat(char *s1,int num,char *s2,char *s3)
{
	int i=0,j=0;
    stringstream ss;  
    ss<<num;  
    string s;  
    ss>>s;
    while (s1[i]!='\0') 
	{
        s3[j]=s1[i];
        i++;
        j++;
    }
    i=0;
    while (s[i]!='\0') 
    {
        s3[j]=s[i];
        i++;
        j++;
    }
    i=0;
    while (s2[i]!='\0') 
    {
        s3[j]=s2[i];
        i++;
        j++;
    }
    s3[j]='\0';
    cout<<s3;
    return 0;
}
int main()
{ 
	char s1[50],s2[50],s3[100];
	int num;
	cin>>s1>>num>>s2;
  	mystrcat(s1,num,s2,s3);
    return 0;
}
  

