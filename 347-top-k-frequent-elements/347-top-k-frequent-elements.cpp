class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        vector <int> ans;
        for(int i = 0 ; i < nums.size() ; ++i)
            mp[nums[i]]++;
        
        vector <pair<int,int>> freq;
        unordered_map <int,int> :: iterator it;
        for(it = mp.begin() ; it != mp.end() ; ++it)
        {
            freq.push_back({it->second,it->first});
        }
        
        sort(freq.begin(),freq.end());
        int n = freq.size();
        for(int i = n-1 ; i > n-k-1 ; --i)
        {
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};