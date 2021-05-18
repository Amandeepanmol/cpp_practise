#include<bits/stdc++.h>
using namespace std;

void find_rept_missing(vector<int> &v,int n)
{
    unordered_map<int,bool> m;
    
    for(int i=0;i<n;i++)
    {
        if(m.find(v[i])==m.end())
        {
            m[v[i]]=true;
        }
        else
        {
            cout<<"Repeating no is: "<<v[i];
        }
        cout<<endl;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(m.find(i)==m.end())
        {
            cout<<"Missing no is: "<<i;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        
        find_rept_missing(v,n);
    }
}
