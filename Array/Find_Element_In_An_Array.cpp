#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a[n],d,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==d)
        {
            c+=1;
            cout<<i<<endl;
            break;
        }
    }
    
    if(c==0)
    {

        cout<<"-1";
    }
}
