#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class shape{
    public:double base,heigth,radius;
    shape(double a):radius(a){}shape(double a,double b):base(a),heigth(b){}double area;
    virtual void display(){cout<<"area is "<<area<<endl;}};
    class Rectangle : public shape
    {public:Rectangle(double a,double b):shape(a,b){}double computeArea(){return base*heigth;}double computePerimeter(){return 2*(base+heigth);}};
    class Square : public shape{public:Square(double s):shape(s){}double computeArea(){return radius*radius;}double computePerimeter(){return radius*4;}};
    class Circle : public shape{public:Circle(double c):shape(c){}double computeArea()