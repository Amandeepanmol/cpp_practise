#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,copy,rem=0,c=0,d=0,q=0,r=0;
    cin>>n;

    copy=n;             //copy store original no
    while(copy!=0)
    {
        rem=copy%10;
        c+=1;
        copy/=10;
    }

    d=pow(10,c-1);             //divide the no by d u get your quotient

    while(d!=0)
    {
        q=n/d;
        r=n%d;

        cout<<q<<endl;
        n=r;
        d/=10;
    }
}





Sample Input
65784383
Sample Output
6
5
7
8
4
3
8
3
