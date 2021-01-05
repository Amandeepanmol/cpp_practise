//Merge two sorted Arrays into a third Sorted array

#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100
void merge(int a[MAX_SIZE],int b[MAX_SIZE],int c[MAX_SIZE],int n1,int n2)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }  
    }

    while(i<n1)
    {
        c[k]=a[i];
        k++;
        i++;
    }

    
    while(j<n2)
    {
        c[k]=b[j];
        k++;
        j++;
    }
}

int main()
{
    int a[MAX_SIZE],b[MAX_SIZE],c[MAX_SIZE],n1,n2,i;
    cin>>n1;
    cin>>n2;
    for(i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n2;i++)
    {
        cin>>b[i];
    }

    sort(a,a+n1);
    sort(b,b+n2);

    cout<<"Sorted array A is:";
     for(i=0;i<n1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted array B is:";
    for(i=0;i<n2;i++)
    {
        cout<<b[i]<<" ";
    }

    merge(a,b,c,n1,n2);
    cout<<endl;
    cout<<"Merge array is:"<<endl;
    for(i=0;i<(n1+n2);i++)
    {
        cout<<c[i]<<" ";
    }
}
