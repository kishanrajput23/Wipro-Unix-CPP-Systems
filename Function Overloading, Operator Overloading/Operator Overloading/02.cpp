#include<iostream>
using namespace std;

class Date{
    private:
    int day;
    int mth;
    int year;
    
    public:
    
    //Date(): day(0),mth(0),year(0){ }
    
    Date(int d=0, int m=0, int y=0) : day(d), mth(m), year(y){ }
    
    friend Date operator ++(Date &d){
        Date d1;
        d1.day = d.day+1;
        d1.mth = d.mth+1;
        d1.year = d.year+1;
        return d1;
    }

    friend Date operator --(Date &d ,int){
        Date d1;
        d1.day = d.day-1;
        d1.mth = d.mth-1;
        d1.year = d.year-1;
        return d1;
    }

    friend Date operator ++(Date &d ,int){
        Date d2;
        d2.day = d.day+1;
        d2.mth = d.mth+1;
        d2.year = d.year+1;
        return d2;
    }

    friend Date operator --(Date &d){
        Date d2;
        d2.day = d.day-1;
        d2.mth = d.mth-1;
        d2.year = d.year-1;
        return d2;
    }

    void display(){
        cout<<"Day "<<day<<" Month "<<mth<<" Year "<<year<<endl;
    }
};

int main(){
    Date d1(10,05,2020),d2(5,10,2020),d3,d4,d5;
    
    d5=--d2;
    d5.display();
    
    d3=++d1;
    d3.display();
    
    d3=d1++;
    d3.display();
    
    d4=d2--;
    d4.display();

}