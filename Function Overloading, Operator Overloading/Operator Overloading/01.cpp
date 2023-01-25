#include<iostream>
using namespace std;

class Date {
    private:
    int day;
    int mth;
    int year;

    public:
    Date(): day(0), mth(0), year(0) {}
    
    Date(int d, int m, int y) : day(d), mth(m), year(y) {}

    void setDate(int d, int m, int y) {
        day = d;
        mth = m;
        year = y;
    } 

    void display(){
        cout<<"Day : "<<day<<" Month : "<<mth<<" Year : "<<year<<endl;
    }

    friend Date operator +(Date &d, int n) {
        Date d1;
        d1.day = d.day+n;
        d1.mth = d.mth;
        d1.year = d.year;
        return d1;
    }

    friend Date operator -(Date &d, int n) {
        Date d1;
        d1.day = d.day-n;
        d1.mth = d.mth;
        d1.year = d.year;
        return d1;   
    }

};

int main() {
    Date d(10,12,2022), d1;

    d1.setDate(10,12,2022);

    d1 = d+5;
    d1.display();

    d1 = d-5;
    d1.display(); 

    return 0;
}