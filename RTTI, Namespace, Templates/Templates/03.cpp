//Template....3
#include <iostream>

using namespace std;
class Vector
{
    double A[10];
    public:
    Vector();
    Vector(double a);
    double sum();
    double max ();
    double min();
    void sort();
    ~Vector();
};

int main()
{
    double A[10],max,min,sum;
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<sum<<endl;

    return 0;
}
