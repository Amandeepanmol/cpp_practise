// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

class Solution{
public:		
	int b_first_search(int a[],int n,int key)
    {
        int low=0;
        int high=n-1;
        
        int mid=0;
        int res=-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(a[mid]==key)
            {
                res=mid;
                high=mid-1;
            }
            else if(a[mid]<key)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return res;
    }

    int b_last_search(int a[],int n,int key)
    {
        int low=0;
        int high=n-1;
        
        int mid=0;
        int res=-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(a[mid]==key)
            {
                res=mid;
                low=mid+1;
            }
            else if(a[mid]<key)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return res;
    }
	
	
	
	int count(int arr[], int n, int x) 
	{
	    // code here
	    
	    int f_index=0,l_index=0;
	    f_index=b_first_search(arr,n,x);
        l_index=b_last_search(arr,n,x);
    
        if(f_index==-1)
        {
            return 0;
        }
        return l_index-f_index+1;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}


//https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
