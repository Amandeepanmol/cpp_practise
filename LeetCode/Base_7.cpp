class Solution {
public:
    string convertToBase7(int num) {
        int ans=0;
        int power=1;
        int rem=0;
        
        while(num!=0)
        {
            rem=num%7;
            num/=7;
            
            ans+=(rem*power);
            power*=10;
        }
        
        string str=to_string(ans);
        return str;
    }
};
