#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,i;
    cin>>n1;
    cin>>n2;
    for(i=n1;i<=n2;i++)
    {
        int j,c=0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                c+=1;
                break;
            }
        }
        
        if(c==0)
        {
            cout<<i<<endl;
        }
    }
}







Sample Input
6 
24
Sample Output
7
11
13
17
19
23
