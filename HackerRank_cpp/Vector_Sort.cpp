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
    //cin>>ele;
    for(int i=0;i<n;i++)
    {
         cin>>ele;
        v.push_back(ele);
    }
    sort(v.begin(),v.end());
    
    for(auto a:v)
    {
        cout<<a<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
