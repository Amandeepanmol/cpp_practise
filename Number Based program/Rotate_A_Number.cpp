#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int copy;
    copy=n;
    int c=0,rem=0;
    
    while(copy!=0)
    {
        rem=copy%10;
        c+=1;
        copy/=10;
    }
    
    k=k%c;
    if(k<0)
    {
        k+=c;
    }
    
    int divi=pow(10,k);
    int r=n%divi;
    int q=n/divi;
    
    int mult=pow(10,c-k);
    
    int ans=(r*mult)+q;
    cout<<ans<<endl;
}









Constraints
1 <= n < 10^9
-10^9 < k < 10^9
Sample Input
562984
2
Sample Output
845629


