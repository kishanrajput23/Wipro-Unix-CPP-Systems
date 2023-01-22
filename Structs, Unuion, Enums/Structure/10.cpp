#include <iostream>
using namespace std;

struct s_memo{
    int nval;
    char cval;
};

union u_memo {
    int nval;
    char cval;
};

int main() {
    struct s_memo s;
    union u_memo u;
    
    cout<<"Enter the structure data below"<<endl;
    
    cout<<"Enter the integer value : ";
    cin>>s.nval;
    
    cout<<"Enter the character value : ";
    cin>> s.cval;
    
    cout<<"Enter the union data below"<<endl;
    
    cout<<"Enter the integer value : ";
    cin>>u.nval;
    
    cout<<"Enter the character value : ";
    cin>> u.cval;
    
    cout<<"******Structure Data******"<<endl;
    cout<<"Interger Value : "<<s.nval<<endl;
    cout<<"Character value : "<<s.cval<<endl;
    
    cout<<"******Union Data******"<<endl;
    cout<<"Interger Value : "<<u.nval<<endl;
    cout<<"Character value : "<<u.cval<<endl;
    
    cout<<"The size of structure is : "<<sizeof(struct s_memo)<<endl;
    cout<<"The size of union is : "<<sizeof(union u_memo)<<endl;
    return 0;
}