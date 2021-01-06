#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1000

int main()
{
    int a[MAX_SIZE],i,n,ele,mid=0,l,f,flag=0;
    cin>>n;

    if(n<0 || n>MAX_SIZE)
    {
        cout<<"Invalid range";
    }


    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the element to be searched for:";
    cin>>ele;
    
    f=0;
    l=n-1;
  
    sort(a,a+n);          // for binary search array must be sorted

    while(f<=l)
    {
        mid=(f+l)/2;
        if(a[mid]==ele)
        {
            flag++;
            break;
        }

        else if(a[mid]<ele)
        {
            f=mid+1;
        }

        else if(a[mid]>ele)
        {
            l=mid-1;
        }
    }

    if(flag!=0)
    {
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Not present "<<endl;
    }
}
