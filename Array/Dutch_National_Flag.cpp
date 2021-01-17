#include<bits/stdc++.h>
using namespace std;

void segreate(int a[],int n)
{
    int l,mid,h;
    l=0,mid=0,h=n-1;
    
    while(mid<=h)
    {
        switch(a[mid])
        {
            case 0:
                swap(a[l],a[mid]);
                l++;mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid],a[h]);
                h--;
                break;
        }
    }
}

void printArray(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
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
    
    segreate(a,n);
    printArray(a,n);
}
