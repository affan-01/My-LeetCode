class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix_sum(n,0);
        int sum = 0 ;
        for(int i = 0 ; i < n ; ++i)
        {
            sum += nums[i];
            prefix_sum[i] = sum;
        }
        for(int i = 0 ; i < n ; ++i)
        {
            if(prefix_sum[i]-nums[i] == sum - prefix_sum[i])
                return i;
        }
        return -1;
    }
};