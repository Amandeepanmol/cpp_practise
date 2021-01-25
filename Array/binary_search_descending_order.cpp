#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[],int n,int ele)
{
    int start,end,mid;
    start=0;
    end=n-1;
    mid=0;

    while(start<=end)
    {
        mid=start+((end-start)/2);      
        if(ele==a[mid])
        {
            return mid;
        }

        else if(a[mid]>ele)
        {
            start=mid+1;
        }

        else
        {
            end=mid-1;
        }
    }

    return -1;
}

int main()
{
    int i,n,ele;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cin>>ele;

    cout<<binary_search(a,n,ele);
}
