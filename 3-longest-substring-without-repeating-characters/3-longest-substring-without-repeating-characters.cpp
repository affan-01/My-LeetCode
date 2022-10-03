class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 , h = 0 ;
        int ans = 0 ;
        unordered_set <int> se;
        while(h < s.size())
        {
            while(se.find(s[h]) != se.end())
            {
                ans = max(ans,h-l);
                se.erase(s[l]);
                l++;
            }
            se.insert(s[h]);
            h++;
        }
        ans = max(ans,h-l);
        return ans;
    }
};