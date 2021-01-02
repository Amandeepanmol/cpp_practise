#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string str[]={"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
      if(i>=1 && i<=9)
      {
        cout<<str[i]<<"\n";
      }
      else if(i>9)
      {
        if(i%2==0)
         {
            cout<<"even"<<"\n";
         }
        else 
        {
            cout<<"odd"<<"\n";
        }
      }
    }
    
    return 0;
}
