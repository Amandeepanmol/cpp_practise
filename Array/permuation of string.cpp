#include<bits/stdc++.h>
using namespace std;

void permutation(string s,int start,int end)
{
    
    if(start==end)
    {
        cout<<s<<endl;
    }
    else
    {
        for(int i=start;i<=end;i++)
        {
            swap(s[start],s[i]);
            permutation(s,start+1,end);
            swap(s[start],s[i]);   //backtracking 
        } 
    }
}
int main()
{
    string s;
    getline(cin,s);
    
    int start=0;
    int end=s.size()-1;
    
    permutation(s,start,end);
}
