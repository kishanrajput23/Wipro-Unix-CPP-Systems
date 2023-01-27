
#include <iostream>
#include<cstring>
using namespace std;

void weigthOfString(char *input1,char *input2){
	int score=0;
	
	for(int i=0;i<strlen(input1);i++){
			if(*input2=='0'){
				if(input1[i]!= 'a' and input1[i]!= 'e' and input1[i]!='i' and input1[i]!='o' and input1[i]!='u' and input1[i]!=' '){
					score+=input1[i]-'a'+1;
				}
			}
	
			else{
				if(input1[i]!=' '){
				
					score+=input1[i]-'a'+1;
				}
			}
	}
	cout<<score<<endl;
}

int main(){
	char s[100];
	char s1[100];
	char s2[2];
	cout <<"Enter the string :";
	cin.getline(s,50);
	cout <<"Enter whether the vowels weigth included or not : ";
	cin >> s2;
	int z=0;
	for(int i=0;i<strlen(s);i++){
		if(!isdigit(s[i]) and (s[i]>='a' or s[i]>='A')and (s[i]<='z' or s[i]<='Z')){
			s1[z]=tolower(s[i]);
			z++;
		}
		
	}
	weigthOfString(s1,s2);
}