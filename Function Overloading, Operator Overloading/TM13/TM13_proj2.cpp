#include <iostream>

using namespace std;

class Int
{
    int a; 
    public:
    Int(int n=0)
    {
        a=n;
    }
    Int(Int &n)
    {
        this->a=n.a;
    }
    void operator = (const Int &n)
    {
        this->a=n.a;
    }
    Int operator ++()
    {
        Int x;
        x.a=++a;
        return x;
    }
    Int operator ++(int)
    {
        Int x;
        x.a=a++;
        return x;
    }
    //friend Int operator +(Int&,Int&);
    Int operator + (Int& obj)
    {
        Int ans;
        ans.a=this->a+obj.a;
        return ans;
    }
    Int operator - (Int& obj)
    {
        Int ans;
        ans.a=this->a-obj.a;
        return ans;
    }
    //friend Int operator -(Int&,Int&);
    void operator -=(Int &n)
    {
        this->a=this->a - n.a;
    }
    void operator +=(Int &n)
    {
        this->a=this->a+n.a;
    }
    void print()
    {
        cout<<this->a;
        cout<<endl;
    }
    friend ostream &operator<<(ostream&,Int&);
    friend istream &operator>>(istream&,Int&);
};
/*Int operator +(Int& m,Int& n)
{
    Int ans;
    ans.a=m.a+n.a;
    return ans;
}
Int operator -(Int& m,Int& n)
{
    Int ans;
    ans.a=m.a+n.a;
    return ans;
}*/
ostream &operator <<(ostream &os,Int &obj)
{
   os<<obj.a;
   return os;
}
istream &operator >>(istream &is,Int &obj)
{
   is>>obj.a;
   return is;
}
int main()
{
    Int x(5);
    Int b(x);
    Int c;
    cout<<"Enter c: "<<endl;
    cin>>c;
    cout<<x;
    cout<<endl;
    cout<<b;
    cout<<endl;
    cout<<c;
    cout<<endl;
    x++;
    cout<<x;
    cout<<endl;
    b=x+c;
    cout<<b;
    cout<<endl;
    c=b-x;
    cout<<c;
    cout<<endl;
    c-=x;
    cout<<c;
    cout<<endl;
    return 0;
}
