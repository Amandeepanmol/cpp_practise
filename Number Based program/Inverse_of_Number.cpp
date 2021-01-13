#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,rem=0,c=0,ans=0;
    cin>>n;
    
    while(n!=0)
    {
        rem=n%10;
        c+=1;
        n/=10;
        
        ans+=c*pow(10,rem-1);
    }
    cout<<ans<<endl;
}








Sample Input
426135
Sample Output
416253
