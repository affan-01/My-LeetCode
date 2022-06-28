class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minval = INT_MAX , ans = 0;
        for(int i = 0 ; i < prices.size() ; ++i)
        {
            if(prices[i] < minval)
            {
                minval = prices[i];
            }
            else
            {
                ans = max(ans, prices[i]-minval);
            }
        }
        return ans;
    }
};