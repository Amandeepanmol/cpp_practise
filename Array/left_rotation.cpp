#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 10000

int main()
{
    int a[MAX_SIZE],i,n,temp=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    temp=a[0];
    for(i=1;i<n;i++)
    {
        a[i-1]=a[i];
    }

    a[n-1]=temp;

    cout<<"Left Rotation :";
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
} 
