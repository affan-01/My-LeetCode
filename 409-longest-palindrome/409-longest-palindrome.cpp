class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0 , max_odd = 0;
        int flag = 0 ;
        unordered_map <char , int> mp;
        for(int i = 0 ; i < s.size() ; ++i)
        {
            mp[s[i]]++;
        }
        for(auto it = mp.begin() ; it != mp.end() ; ++it)
        {
            int count = it->second;
            if( count%2 == 0)
                ans += count;
            else if(count%2 != 0 && flag == 0)
            {
                ans += count;
                flag = 1;
            }
            else
                ans += count-1;
        }
        
        return ans;
    }
};