#include<iostream>
using namespace std;

class student
{
    private:
    int admno;
    char sname[20];
    float english, maths, science;
    float total;
    
    float ctotal() {
        total = (english+maths+science);
        return total;
    }
    
    public:
    void Readdata() {
        cout<<"Enter student admission number : ";
        cin>>admno;
            
        cout<<"Enter student name : ";
        cin>>sname;
            
        cout<<"Enter the student's english subject marks : ";
        cin>>english;
            
        cout<<"Enter the student's maths subject marks : ";
        cin>>maths;
            
        cout<<"Enter the student's science subject marks : ";
        cin>>science;
        
        ctotal();
    }
        
    void Displaydata() {
        cout<<"Below are the student details filled by an user"<<endl;
        cout<<"Admission number : "<<admno<<endl;
        cout<<"Student name : "<<sname<<endl;
        cout<<"English subject marks : "<<english<<endl;
        cout<<"Maths subject marks : "<<maths<<endl;
        cout<<"Science subject marks : "<<science<<endl;
        cout<<"Total marks gained by student is : "<<total<<endl;
    }
};

int main() {
    student s1;
    s1.Readdata();
    s1.Displaydata();
    return 0;
   }
