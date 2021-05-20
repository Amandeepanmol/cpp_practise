class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
         int s=0;
         int e=0;
         int maxone=0;
         int zcount=0;
        
        while(e<nums.size())
        {
            if(nums[e]==0)
            {
                zcount++;
            }
            
            while(zcount>k)
            {
                if(nums[s]==0)
                {
                    zcount--;
                }
                
                s++;
            }
            maxone=max(maxone,e-s+1);
            e++;
        }
        return maxone;
        
    }
};
