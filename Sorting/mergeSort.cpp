#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int m , int e)
{
    vector<int> tmp(e-s+1);
    int left = s;
    int right = m+1;
    int idx = 0;
    
    while(left <= m && right <=e)
    {
        if(arr[left] <= arr[right])
        {
            tmp[idx++] = arr[left++];
        }
        else
        {
            tmp[idx++] = arr[right++];
        }
    }
     //left side is not ended
    while(left <= m)
    {
        tmp[idx++] = arr[left++];
    }
    
    while( right <=e)
    {
        tmp[idx++] = arr[right++];
    }
    
    //copy tmp to original 
    
    idx = 0;  // assigning back
    while(s <= e)
    {
        arr[s++] = tmp[idx++];
    }
    
}
void mergeSort(int arr[], int s, int e)
{
    if(s == e)
    {
        return;  // single element
    }
    
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
    
}
int main()
{
    int arr[] = {6,3,7,3,10};
    mergeSort(arr,0,4);
    cout<<"After merge sort"<<endl;
    
    for(int i = 0; i<=4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
