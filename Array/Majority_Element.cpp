#include<bits/stdc++.h>
using namespace std;

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    
    int c=0;
    int major=0;
    
    for(int i=0;i<size;i++)
    {
        if(a[major]==a[i])
        {
            c++;
        }
        else
        {
            c--;
            if(c==0)
            {
                major=i;
                c=1;
                
            }
        }
    }
    
    c=0;
    for(int i=0;i<size;i++)
    {
        if(a[major]==a[i])
        {
            c++;
        }
    }
    
    if(c<=(size/2))
    {
      return -1;
    }
    else
    {
    
    return a[major];
    }
}


int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
