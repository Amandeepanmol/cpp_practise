#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100
bool comparator(int a,int b)
{
    //cout<<a<<endl<<b<<endl;
    return a>b;    // sorting in the descending order and for ascending a<b
}

int main()
{
    int n,arr[MAX_SIZE],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n,comparator);    //sort function that is used for sorting 
    
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
