class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last_index = nums.size()-1;
        for(int i = nums.size()-2 ; i >= 0 ; --i)
        {
            if(last_index-i <= nums[i])
            {
                last_index = i ;
            }
        }
        if(last_index <= 0)
            return true;
        else
            return false;
    }
};