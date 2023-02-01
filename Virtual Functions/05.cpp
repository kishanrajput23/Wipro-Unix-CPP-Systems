#include<iostream>
using namespace std;
class Chart{
    float a;
    float b;
    float c;
    public:
        Chart(){}
        Chart(float a,float b,float c){
           this->a=a;
           this->b=b;
           this->c=c;
        }
        virtual void plotChart(){
            cout<<"Values Of A -> "<<a<<" Values Of B -> "<<b<<" Values Of C -> "<<c<<endl;
        }
};
class PieChart:public Chart{
    float d;
    public:
        PieChart(float a,float b,float c,float d):Chart(a,b,c){
            this->d=d;
        }
        void plotChart(){
            cout<<"Values Of A -> "<<a<<" Values Of B -> "<<b<<" Values Of C -> "<<c<<"Value of D ->"<<d<<endl;
        }
};
class BarChart:public Chart{
    public:
        BarChart(float a,float b,float c):Chart(a,b,c){
        }
        void plotChart(){
            cout<<"Values Of A -> "<<a<<" Values Of B -> "<<b<<" Values Of C -> "<<c<<endl;
        }
};
int main(){
    Chart c(1.12,4.21,8.1);
    c.plotChart();

    cout<<"-----------------------------"<<endl;
    PieChart p(1.1,2.2,3.3,4.4);
    Chart *c1=&p;
    c1->plotChart();

    cout<<"-----------------------------"<<endl;
    BarChart b(1.1,2.2,3.3);
    Chart *c2=&b;
    c2->plotChart();

    return 0;
}