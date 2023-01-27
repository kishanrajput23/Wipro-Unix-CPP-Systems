#include <iostream>
using namespace std;

class Time
{
    private:
    int hr,mn,sc;
    public:
    Time()
    {
        hr=0;
        mn=0;
        sc=0;
    }
    Time(int h,int m,int s)
    {
        hr=h;
        mn=m;
        sc=s;
    }
    int gethour()
    {
        return hr;
    }
    int getmin()
    {
        return mn;
    }
    int getsec()
    {
        return sc;
    }
    void sethour(int h)
    {
        this->hr=h;
    }
    void setmin(int m)
    {
        this->mn=m;
    }
    void setsec(int s)
    {
        this->sc=s;
    }
    Time difference(Time t2);
    int compare(Time t2)
    {
        if(this->hr!=t2.gethour())
        return 0;
        if(this->mn!=t2.getmin())
        return 0;
        if(this->sc!=t2.getsec())
        return 0;
        return 1;
    }
};
Time Time::difference(Time t2)
{
    Time ans;
    ans.hr = this->hr - t2.hr;
    ans.mn = this->mn - t2.mn;
    ans.sc = this->sc - t2.sc;
    return ans;
}
int main()
{
    Time t;
    cout<<t.gethour()<<" "<<t.getmin()<<" "<<t.getsec()<<endl;
    t.sethour(5);
    t.setmin(35);
    t.setsec(20);
    cout<<t.gethour()<<" "<<t.getmin()<<" "<<t.getsec()<<endl;
    Time t1(4,32,15);
    cout<<t1.gethour()<<" "<<t1.getmin()<<" "<<t1.getsec()<<endl;
    cout<<t.compare(t1)<<endl;
    Time t2=t.difference(t1);
    cout<<t2.gethour()<<" "<<t2.getmin()<<" "<<t2.getsec()<<endl;
    return 0;
}
