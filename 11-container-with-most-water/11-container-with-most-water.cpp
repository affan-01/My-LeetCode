class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0 , h = height.size()-1;
        int ans = INT_MIN;
        while(l < h)
        {
            ans = max(min(height[l],height[h])*(h-l) , ans);
            if(height[l] <= height[h])
            {
                l++;
            }
            else
            {
                h--;
            }
        }
        return ans;
    }
};