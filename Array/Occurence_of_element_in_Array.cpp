#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100

int main()
{
    int a[MAX_SIZE],n,i,flag=0,ele;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Sorted array is :"<<endl;
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    cout<<"ENter the element to be searched for:"<<endl;
    cin>>ele;

    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            flag++;
        }
        else if(a[i]>ele)
        {
            break;
        }
        
    }
    cout<<"Occurence of element is: "<<flag<<endl;
}
