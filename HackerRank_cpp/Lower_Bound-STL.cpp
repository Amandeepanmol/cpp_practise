#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    vector<int> v;
    int ele;
    
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
    
    int q;
    cin>>q;
    int choice;
    while(q--)
    {
        cin>>choice;
        int r=lower_bound(v.begin(),v.end(),choice)-v.begin();    
        
        if(v[r]==choice)   
        {
            cout<<"Yes"<<" "<<(r+1)<<endl;
        }
        else
        {
            cout<<"No"<<" "<<(r+1)<<endl;
        }
    }
    
    return 0;
}
