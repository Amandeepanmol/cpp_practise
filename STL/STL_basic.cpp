#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> v;
    int ele;
    
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        
        v.push_back(ele);
    }
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    cout<<*max_element(v.begin(),v.end())<<endl;
    
    sort(v.begin(),v.end());
    
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    
    cout<<endl;
    reverse(v.begin(),v.end());       //reverse a vector
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    
    cout<<endl;
    
    v.insert(v.begin()+1,89);
    
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    
    cout<<endl;
    
    v.erase(v.begin()+2,v.begin()+4);
     for(auto x:v)
    {
        cout<<x<<" ";
    }
    
    sort(v.begin(),v.end());
    int ele1;
    cin>>ele1;
    
    int x= lower_bound(v.begin(),v.end(),ele1)-v.begin();
    cout<<x;
    
}


OUTPUT
5
9 7 8 5 6
9 7 8 5 6 
9
5 6 7 8 9 
9 8 7 6 5 
9 89 8 7 6 5 
9 89 6 5 
10
3

