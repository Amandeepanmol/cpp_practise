#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,copy1,copy2;
    
    cin>>n1;
    cin>>n2;
    
    copy1=n1;
    copy2=n2;

   while(n1!=n2)
   {
       if(n1>n2)
       {
           n1-=n2;
       }
       else
       {
           n2-=n1;
       }
   }
    cout<<n1<<endl;   // hcg or gcd
    int lcm=(copy1*copy2)/n1;      //lcm
    cout<<lcm<<endl;
}
