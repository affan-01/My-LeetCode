class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r = 0 , l = 0 , ans = 0 ;
        unordered_set <char> se ;
        while(r < s.size())
        {
            while(se.find(s[r]) != se.end())
            {
                if(se.size() > ans)
                    ans = se.size();
                se.erase(s[l]);
                l++;
            }
            se.insert(s[r]);
            r++;
        }
        if(r-l > ans)
            ans = r-l;
        return ans;
    }
};