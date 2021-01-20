#include<bits/stdc++.h>
using namespace std;

int firstindex(int a[],int n,int ele)
{
    int l=0,h=n-1,mid=0;
    int fi=-1;

    while(l<=h)
    {
        mid=(l+h)/2;

        if(ele>a[mid])
        {
            l=mid+1;
        }
        else if(ele<a[mid])
        {
            h=mid-1;
        }
        else
        {
            fi=mid;
            h=mid-1;
        }
    }
   return fi;
}

int lastindex(int a[],int n,int ele)
{
    int l=0,h=n-1,mid=0;
    int li=-1;

    while(l<=h)
    {
        mid=(l+h)/2;

        if(ele>a[mid])
        {
            l=mid+1;
        }
        else if(ele<a[mid])
        {
            h=mid-1;
        }
        else
        {
            li=mid;
            l=mid+1;
        }
        
    }
    return li;
}


int main()
{
    int i,n1,ele;
    cin>>n1;


    int a[n1];

    for(i=0;i<n1;i++)
    {
        cin>>a[i];
    }

    cin>>ele;

    int n=sizeof(a)/sizeof(a[0]);

    cout<<firstindex(a,n,ele)<<endl;
    
    cout<<lastindex(a,n,ele)<<endl;


}
