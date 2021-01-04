#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100000
int main() 
{
    int i,n,arr[MAX_SIZE];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
