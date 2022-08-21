class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0 , white = 0 , blue = 0 ;
        vector <int> ans;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(nums[i] == 0)
                ++red;
            if(nums[i] == 1)
                ++white;
            if(nums[i] == 2)
                ++blue;
        }
        int i = 0 ;
        while(red--)
        {
            nums[i] = 0;
            i++;
        }
        while(white--)
        {
            nums[i] = 1;
            i++;
        }
        while(blue--)
        {
            nums[i] = 2;
            i++;
        }
 
    }
};