#include<bits/stdc++.h>
using namespace std;
int max_of_four(int a,int b,int c,int d)
{
  int max=d;
  if(a>max && a>b && a>c)
   {
      max=a;
   }
  else if(b>max && b>a && b>c)
   {
      max=b;
   }
  else  if(c>max && c>a && c>b)
   {
      max=c;
   }
  return max;
}

int main()
 {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}
