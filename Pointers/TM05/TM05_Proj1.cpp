#include <bits/stdc++.h> 
using namespace std;

void BigSubStr(string s,int k)
{
    int n = s.size(); 
    unordered_map<string, int> m;
    for(int i=0;i<n-k;i++)
    {
        string r = s.substr(i,k);
        m[r]++;
    }
    int maxi = 0; 
    for (auto i = m.begin(); i != m.end(); i++) 
    { 
        if (i->second > maxi) 
            maxi = i->second; 
    } 
    for(int i=0;i<n-k;i++)
    {
        string r = s.substr(i,k);
        if(m[r]==maxi)
        {
            cout<<r<<" ";
            m[r]=0;
        }
    }
}
int main()
{
    string str;
    getline(cin,str);
    int n;
    cin>>n;
    BigSubStr(str,n);
    return 0;
}
