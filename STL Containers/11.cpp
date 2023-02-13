#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v={77,56,89,64,64,79,65,38,97,100,45,88,69,47,64,85,93,77,73,51};
	int countD=0,class1=0,class2=0;
	 vector<int> :: iterator it;
	 for(it = v.begin(); it != v.end(); ++it){
	 	double score=(*it);
	 	cout<<score<<" "<<endl;
	 	if(score>=75.0)
	 	countD++;
	 	else if((score>=60.0) &&(score<77.0))
	 	class1++;
	 	else if((score>=50.0)&&(score<60.0))
	 	class2++;
	 }
	 cout<<"no. of distinctions  ( >= 75% ): "<<countD<<endl;
	 cout<<"no. of 1st  class ( 60  >=   &  < 77% ): "<<class1<<endl;
	 cout<<"no. of 2nd class ( 50  >=   &  < 60% ): "<<class2<<endl;
}
	
