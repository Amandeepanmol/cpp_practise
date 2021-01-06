#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 10000

int main()
{
    int a[MAX_SIZE],i,f,l,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    f=0;
    l=n-1;

    while(f<l)
    {
        swap(a[f],a[l]);
        f++;
        l--;
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
