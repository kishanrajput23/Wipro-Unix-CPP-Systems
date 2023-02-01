#include <iostream>
using namespace std;
class shape
{
    public:
    double area;
    void display()
    {
        cout<<"area is "<<area<<endl;
    }
};
class Rectangle : public shape
{
    public:
    void computeArea(int l,int w)
    {
        area = (l*w);
    }

};
class Square : public shape
{
    public:
    void computeArea(int a)
    {
        area = (a*a);
    }
};
class Circle : public shape
{
    public:
    void computeArea(int r)
    {
        area =((3.14285714)*r*r);
    }

};
int main()
{
    Rectangle r;
    Square s;
    Circle c;
    cout<<"Calculating area of Rectangle"<<endl;
    r.computeArea(12,12);
    cout<<"Displaying area of Rectangle"<<endl;
    r.display();
    cout<<"Calculating area of Square"<<endl;
    s.computeArea(12);
    cout<<"Displaying area of Square"<<endl;
    s.display();
    cout<<"Calculating area of Circle"<<endl;
    c.computeArea(12);
    cout<<"Displaying area of Circle"<<endl;
    c.display();
}