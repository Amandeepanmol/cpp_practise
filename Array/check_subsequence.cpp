#include<bits/stdc++.h>
using namespace std;

bool chek_subsequence(string str,string target)
{
    if(str.size()>target.size())
    {
        return false;
    }
    
    int i=0,j=0;
    
    while(i<str.size() and j<target.size())
    {
        if(str[i]==target[j])
        {
            i++;
        }
        j++;
    }
    
    if(i==str.size())   // all subsequence is covered 
    {
        return true;
    }
    return false;
}

int main()
{
    string str,target;  //str=>check for subsequence
    cin>>str>>target;    // target=> given string
    
    cout<<chek_subsequence(str,target)<<endl;
}
