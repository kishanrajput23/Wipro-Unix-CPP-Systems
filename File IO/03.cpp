#include <iostream>
#include<fstream>

using namespace std;
class vector
{
    char arr[100];
    public:
     void vector1()
    {
        cin.getline(arr,100);
        ofstream myfile("xyz.txt");
        myfile<<arr;
        myfile.close();
        cout<<"file write operation performed successfully"<<endl<<endl; 
       
    }
    void display()
    {
        char arr1[100];
        ifstream obj("xyz.txt");
        cin.getline(arr1,100);
        cout<<"array content:"<<arr1<<endl;
        cout<<"file reading operation completed"<<endl;
        obj.close();
    }
    
};


int main()
{
    vector v1;
    
    cout<<"entre the array elements:"<<endl;
    v1.vector1();
    
    cout<<"reading of file operation started"<<endl;
    v1.display();
    
   
    

    return 0;
}