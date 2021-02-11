class Solution {
public:
    string toLowerCase(string str) {
        int n=str.length()-1;
        
        int i;
        for(i=0;i<=n;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i]+=32;
            }
        }
        return str;      
    }
};
