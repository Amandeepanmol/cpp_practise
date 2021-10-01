#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        unordered_map<char,int>m;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        int c=0;
        for(auto i:m)
        {
            if(i.second==1)
            {
                c++;
            }
            else
            {
                continue;
            }
        }
        cout<<c<<endl;
    }
}
