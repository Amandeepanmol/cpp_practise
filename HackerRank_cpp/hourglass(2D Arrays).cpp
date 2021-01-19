#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10][10],i,j,sum=0;
    int max_value=INT_MIN;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
    
    /*
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>max_value)
            {
                max_value=sum;
            }
        }
    }
     cout<<max_value<<endl;
}
