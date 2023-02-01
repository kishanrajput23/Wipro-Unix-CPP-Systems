#include<iostream>
using namespace std;
class Sample{
      public:
      int intdata;
      string stringdata;
      Sample(){
            intdata=123456;
            stringdata="Kishan";
      }
      
      int getintData(){
            return intdata;
      }
      string getStringData(){
            return stringdata;
      }
      char characterAt(int a){
            return stringdata[a];
      }
      int reverse()
      {
        int temp=intdata;
        int rev=0;
        while(temp)
        {
            rev=rev*10+(temp%10);
            temp/=10;
        }
        return rev;
      }
    ~Sample()
    {
        cout<<"Sample class Work is done..."<<endl;
    }
};
int main(){
      Sample obj;
      //obj.setData(12345,"Welcom to Myworld");
      cout<<"Integer Data is: "<<obj.getintData()<<endl;
      cout<<"String Data is: "<<obj.getStringData()<<endl;
      int n;
      cout<<"Enter the index of the string : ";
      cin>>n;
      cout<<obj.characterAt(n)<<endl;
      cout<<obj.reverse()<<endl;
}