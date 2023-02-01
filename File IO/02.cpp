#include <iostream>
#include <fstream>
using namespace std;
class Contestant {
public:
    int i;
    float f;
    string m;
    char c;
    int input();
    int output();
};

int Contestant::input()
{
   
    ofstream file_obj;

    file_obj.open("IMP_Messages.txt", ios::app);
 
    Contestant obj;
    int i1=13;
    float f1=23.6;
    string m1="Hello CPP";
    char c1='s';
    obj.i = i1;
    obj.f = f1;
    obj.m = m1;
    obj.c = c1;
    file_obj.write((char*)&obj, sizeof(obj));
    return 0;
}

int Contestant::output()
{
    ifstream file_obj;
    file_obj.open("IMP_Messages.txt", ios::in);
    Contestant obj;
    file_obj.read((char*)&obj, sizeof(obj));
    int i2=obj.i;
    float f2=obj.f;
    string m2=obj.m;
    char c2=obj.c;
    cout << i2<<" "<<f2<<" "<<m2<<" "<<c2<<endl;
    return 0;
}

int main()
{
    Contestant object;
    object.input();
    object.output();
 
    return 0;
}