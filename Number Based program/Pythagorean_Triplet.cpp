#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    int max=a;
    
    if(max<b)
    {
        max=b;
    }
    else if(max<c)
    {
        max=c;
    }
    
    //cout<<max<<endl;
    if(max==a)
    {
        if((b*b+c*c)==(a*a))
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
    }
    else if(max==b)
    {
        if((a*a+c*c)==(b*b))
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
    }
    else
    {
        if((a*a+b*b)==(c*c))
        {
            
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
    }
}
