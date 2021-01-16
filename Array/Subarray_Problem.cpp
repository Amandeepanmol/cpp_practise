#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    int a[n];
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                cout<<a[k]<<"\t";
            }
             cout<<endl;
        }
       
    }
}

Sample Input
3
10
20
30
	

Expected Output
10	
10	20	
10	20	30	
20	
20	30	
30	

