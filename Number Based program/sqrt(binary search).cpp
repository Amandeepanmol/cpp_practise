
#include<bits/stdc++.h>
using namespace std;

// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
  
    long long int l=1,h=x,ans=0,mid=0;
    while(l<=h)
    {
            mid=(l+h)/2;
            if(mid*mid<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
    }
        
    
    return ans;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}
 
