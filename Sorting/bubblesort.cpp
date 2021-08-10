#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100

int main()
{
    int n,arr[MAX_SIZE],i,j,temp=0;
    cin>>n;

    if(n<0 || n>MAX_SIZE)
    {
        cout<<"Invalid range"<<endl;         // if invalid input is enter
    }

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)  // further optimise as last elemnt is sorted
        {
            if(arr[j]<arr[j+1])            //descending order for ascending just change < to > then
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Array after sorting is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

/*
T(c)=O(n^2)
(n-2)+(n-1)+........2+1
=>n*(n-1)/2;




===============================

Optimised bubble sort => when array is sorted 
----------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100

int main()
{
    int n,arr[MAX_SIZE],i,j,temp=0;
    cin>>n;

    if(n<0 || n>MAX_SIZE)
    {
        cout<<"Invalid range"<<endl;         // if invalid input is enter
    }

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bool flag=false;        // isme jab array sorted hoga toh last tak na dekhga
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)  // further optimise as last elemnt is sorted
        {
            if(arr[j]>arr[j+1])            //descending order for ascending just change < to > then
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;
            }
        }
        
        if(flag==false)      // jab array  sorted hai toh return out iss case mai iski time complexity O(n) hogyi
        {
            break;
        }
    }
    cout<<"Array after sorting is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
