#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    int i;
   
    int rem=0;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        int sum=0;
        while(a[i]!=0)
        {
            rem=a[i]%10;
            sum=sum+rem;
            a[i]/=10;
        }

        cout<<sum<<" ";
    }

}

Input
4
43 345 20 987

Output
7 12 2 24



