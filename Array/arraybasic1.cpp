Check	whether	element is	present	in	an	array	or not

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[10],i,ele,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>ele;

    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            flag+=1;
            break;
        }
    }
    if(flag!=0)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}

