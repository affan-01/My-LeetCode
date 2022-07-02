class Solution {
public:
    map <int,int> dp;
    int climbStairs(int n) {
        
        if(n == 0 )
         return 1 ;
        
        else if(n < 0)
        return 0;
        
        if(dp.find(n) != dp.end())
            return dp[n];
        else
        {
           dp[n] = climbStairs(n-1)+climbStairs(n-2);
           return dp[n];
        }
    }
};