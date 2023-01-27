#include <iostream>
using namespace std;

int *arr=NULL;
int i=0;
int main()
{
    while(1)
    {
        char x;
        cin>>x;
        switch(x)
        {
            case 'C':
                int n;
                cin>>n;
                arr=new int[n];
                break;
            case 'A':
                int x;
                cin>>x;
                arr[i++]=x;
                break;
            case 'D':
                i--;
                arr[i]=0;
                break;
            case 'R':
                int idx,val;
                cin>>idx;
                cin>>val;
                arr[idx]=val;
                break;
            case 'P':
                for(int j=0;j<i;j++)
                cout<<arr[j]<<" ";
                cout<<endl;
                break;
            case 'E':
                delete[] arr;
                exit(0);
        }
    }
    return 0;
}
