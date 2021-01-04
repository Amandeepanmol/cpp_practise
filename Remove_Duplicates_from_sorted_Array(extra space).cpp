//using extra space

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
        cout<<arr[i]<<" "<<endl;;
    }
    

    int temp[MAX_SIZE];
    int j=0;

    for(i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            temp[j]=arr[i];
            j++;
        }   
    }
    temp[j]=arr[n-1];
    
    cout<<"Distinct element are:"<<endl;
    for(j=0;j<n;j++)
    {
        cout<<temp[j]<<" ";
    }


}
