//using constant space

#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1000

int main()
{
    int i,n,arr[MAX_SIZE];
    cin>>n;
    cout<<"Enter element "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    cout<<"Sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int j=0;

    for(i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[j]=arr[i];
            j++;
        }   
    }
    arr[j]=arr[n-1];
    j++;
    cout<<endl;
    cout<<"Distinct element are:"<<endl;
    for(i=0;i<j;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
