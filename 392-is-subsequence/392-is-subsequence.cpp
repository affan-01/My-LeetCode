class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ps = 0 , pt  = 0; // 2 pointers
        int count = 0 ;
        while(pt < t.size())
        {
            if(s[ps] == t[pt])
            {
                ++ps;
                ++count;
            }
            ++pt;
        }
        if(count == s.size())
            return true;
        else
            return false;
        
    }
};