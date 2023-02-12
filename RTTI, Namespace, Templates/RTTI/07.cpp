//RTTI....7
#include <iostream>
int countn1 = 0,countn2=0,countn3=0;
using namespace std;
enum ShapeType
{
    ST_Rectangle, ST_Circle, ST_Triangle
};
class Shape {
    public:
    static Shape* Create(ShapeType type);
};
class Rectangle : public Shape {};
class Circle : public Shape{};
class Triangle : public Shape{};

Shape* Shape::Create(ShapeType type)
{
    if (type == Rectangle)
    {   return new Rectangle();
        countn1++;
    }
    else if (type == Circle)
    {
        return new Circle();
        countn2++;
    }
    else if (type == Triangle)
    {
        return new Triangle();
        countn3++;
    }
    else return NULL;
}
int main()
{
    Rectangle n1[20];
    Circle n2[20];
    Triangle n3[20];
   
    cout<<"n1="<<countn1<<"\n";
    cout<<"n2="<<countn2<<"\n";
    cout<<"n3="<<countn3<<"\n";

    return 0;
}