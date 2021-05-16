#include<bits/stdc++.h>
using namespace std;


vector<int> target_zero(int n)
{
    vector<int> v1;
    int ans=floor(n/2.0);

    for(int i=1;i<=ans;i++)
    {
        v1.push_back(i);
        v1.push_back((-1*i));
    }

    if(n%2==1)
    {
        v1.push_back(0);
    }

    return v1;
}
int main()
{
    int n;
    cin>>n;

    vector<int> v=target_zero(n);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
