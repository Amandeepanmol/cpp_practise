#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1000

int sumofArray(int a[], int n)
{
    int i;
    
    int csum=a[0];           //current sum
    int osum=a[0];         //overall sum
 
    
    for(i=1;i<n;i++)
    {
        if(csum>=0)
        {
            csum+=a[i];
        }
        else
        {
            csum=a[i];
        }

        if(csum>osum)
        {
            osum=csum;
        }   
           // return osum;
    }
        return osum;

}
 
int main()
{
    int a[MAX_SIZE],n,i;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
 
    cout << "The sum of contiguous sub-array with the largest sum is " <<
            sumofArray(a, n);
 
    return 0;
}
