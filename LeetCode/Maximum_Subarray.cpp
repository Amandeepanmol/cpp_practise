class Solution {
public:
    int maxSubArray(vector<int>& a) {
    int n=a.size();
        int os=INT_MIN;
        int cs=0;
        int i=0;
        for(i=0;i<n;i++)
        {
            if(cs>=0)
            {
                cs+=a[i];
            }
            if(cs<0)
            {
                cs=a[i];
            }
            
            if(cs>os)
            {
                os=cs;
            }
        }
        
        return os;
    }
};
        
        
