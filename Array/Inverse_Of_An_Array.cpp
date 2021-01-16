#include<bits/stdc++.h>
using namespace std;

void inverseArray(int a[],int n)
{
    int i,val;
    int inv[n];
    for(i=0;i<n;i++)
    {
        val=a[i];
        inv[val]=i;
    }
     for(val=0;val<n;val++)
     {
         cout<<inv[val]<<endl;
     }
}


int main()
{
    int n1,i;
    cin>>n1;
    int a[n1];
    for(i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    
    int n=sizeof(a)/sizeof(a[0]);
    
    inverseArray(a,n);
    
}



