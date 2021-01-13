#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f=0,s=1,t,i;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cout<<f<<endl;
        t=f+s;
        f=s;
        s=t;
    }
    
}



Sample Input
12
Sample Output
0                                                                                                                
1                                                                                                                
1                                                                                                                
2                                                                                                                
3                                                                                                                
5                                                                                                                
8                                                                                                                
13                                                                                                               
21                                                                                                               
34                                                                                                               
55                                                                                                               
89                                                                                                               
  
