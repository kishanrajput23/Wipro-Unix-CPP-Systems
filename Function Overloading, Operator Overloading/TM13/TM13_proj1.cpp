#include <iostream>
 #include <cstring>

using namespace std;

class Bitset
{
    private:
    int n;
    int *arr;
    int idx,bitval;
    
    public:
	Bitset(int size);
    void setbit(int idx)
    {
    	arr[idx]=1;
    }
    void setbit(int idx,int bitval)
    {
    	 arr[idx]=bitval;
    }
    void clearbit(int idx)
    {
    	 arr[idx]=0;
    }
    void togglebit(int idx)
    {
    	if(arr[idx]==0)
        arr[idx]=1;
        else arr[idx]=0;
    }
    void getbit(int idx)
    {
    	 cout << arr[idx] << endl;
    }
    void print()
    {
    	for(int i=n-1;i>=0;i--)
    	{
    	    cout << arr[i];
        }
        cout<<"\n";
    }
};
Bitset::Bitset(int size)
{
    arr = new int[size];
    n=size;
    memset(arr, 0, sizeof(arr));
}
 
int main()
{
    Bitset x(5);
    x.print();
    x.setbit(0);
    x.setbit(1);
    x.setbit(2);
    x.print();
    x.togglebit(3);
    x.print();
    x.getbit(4);
    x.print();
    return 0;
}
