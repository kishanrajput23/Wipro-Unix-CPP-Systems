#include<iostream>
using namespace std;
class Shape{
    public:
        Shape(){
            cout<<"Shaped Called "<<endl;
        }
        virtual void area(){}
        virtual void perimeter(){}
};
class Rectangle:public Shape{
    int length;
    int breadth;
    public:
        Rectangle(int l,int b){
            this->length=l;
            this->breadth=b;
        }
        void area(){
            int a=length*breadth;
            cout<<"Area of Rectangle is -> "<<a<<endl;
        }
        void perimeter(){
            int p=2*(length+breadth);
            cout<<"Perimeter of Rectangle is -> "<<p<<endl;
        }
};
class Square:public Shape{
    int length;
    public:
        Square(int l){
            this->length=l;
        }
        void area(){
            int a=length*length;
            cout<<"Area of Square is -> "<<a<<endl;
        }
        void perimeter(){
            int p=4*length;
            cout<<"Perimeter of Square is -> "<<p<<endl;
        }
};
class Circle:public Shape{
    int radius;
    public:
        Circle(int r){
            this->radius=r;
        }
        void area(){
            int a=3.14*(radius*radius);
            cout<<"Area of Square is -> "<<a<<endl;
        }
        void perimeter(){
            int p=2*3.14*radius;
            cout<<"Perimeter of Square is -> "<<p<<endl;
        }
};
int main(){
    Circle c(2);
    Shape *s2=&c;
    s2->area();
    s2->perimeter();

    return 0;
}