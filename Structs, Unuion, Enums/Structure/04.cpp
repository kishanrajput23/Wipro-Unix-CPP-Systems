#include <iostream>
using namespace std;

struct BATSMAN {
    char name[100];
    int age;
    int highest_score;
    int least_score;
    int no_of_ducks;
};

void printData(struct BATSMAN arr[3]) {
    
    for (int i=0; i<3; i++) {
        cout<<endl<<"BATSMAN "<<i+1<<endl;
        cout<<"Name : "<<arr[i].name<<endl;
        cout<<"Age : "<<arr[i].age<<endl;
        cout<<"Highest Score : "<<arr[i].highest_score<<endl;
        cout<<"Least Score : "<<arr[i].least_score<<endl;
        cout<<"Number of Ducks : "<<arr[i].no_of_ducks<<endl;
        cout<<"******************************************"<<endl;
    }
}

int main() {
    struct BATSMAN arr[3];
    
    for (int i=0; i<3; i++) {
        cout<<"Enter details for BATSMAN "<<i+1<<endl;
        cout<<endl<<"Enter the batsman name : ";
        cin>>arr[i].name;
        
        cout<<"Enter the batsman age : ";
        cin>>arr[i].age;
        
        cout<<"Enter the batsman highest score : ";
        cin>>arr[i].highest_score;
        
        cout<<"Enter the batsman least score : ";
        cin>>arr[i].least_score;
        
        cout<<"Enter the batsman number of ducks : ";
        cin>>arr[i].no_of_ducks;
        
        cout<<"--------------------------------------"<<endl;
    }
    
    printData(arr);
    
    return 0;
}