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

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])            //descending order for ascending just change < to > then
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Array after sorting is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
