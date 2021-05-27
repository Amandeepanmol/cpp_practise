

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    void doUnion(int a[], int n, int b[], int m)  {
        
        unordered_map<int,int> um;
        
        for(int i=0;i<n;i++)
        {
            um[a[i]]++;
        }
        
        for(int j=0;j<m;j++)
        {
            um[b[j]]++;
        }
        
        //unordered_map<int,int>:: iterator i;
    
      for(auto i=um.begin();i!=um.end();i++)
      {
          cout<<i->first<<" ";
      }
      cout<<endl;
    }
};

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    
	    ob.doUnion(a, n, b, m);
	    
	}
	
	return 0;
} 
