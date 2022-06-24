class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
       vector <int> prefix_Arr(nums.size() , 0);
       prefix_Arr[0] = nums[0];
       for(int i = 1 ; i < nums.size() ; ++i)
       {
           prefix_Arr[i] = prefix_Arr[i-1] + nums[i];
       }
     
       
       for(int i = 0 ; i < prefix_Arr.size() ; ++i)
       {
    
           if(prefix_Arr[i]-nums[i] == prefix_Arr[prefix_Arr.size()-1]-prefix_Arr[i])
           {
               return i;
               break;
           }
       }
        return -1;
    }
};