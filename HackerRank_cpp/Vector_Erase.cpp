#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    
    int n;
    cin>>n;
    
    vector<int> v;
    int ele;
    
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    } 
    int e1,e2,e3;
    cin>>e1;
    
    v.erase(v.begin()+(e1-1));
    
    /*
    for(auto x:v)
    {
        cout<<x<<" ";  
    
    }
    
    */
    
    cin>>e2;
    cin>>e3;
    
    v.erase(v.begin()+(e2-1),v.begin()+(e3-1));
    
    cout<<v.size()<<endl;  // it will print the size of the vector
    
    for(auto x:v)
    {
        cout<<x<<" ";   
    }
    return 0;

}
