class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> mps;
        unordered_map <char,int> mpt;
        for(int i = 0 ; i < s.size() ; ++i)
            mps[s[i]]++;
        for(int i = 0 ; i < t.size() ; ++i)
            mpt[t[i]]++;
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(mps[s[i]] != mpt[s[i]])
            {
                return false;
            }
        }
        if(s.size() != t.size())
            return false;
        return true;
    }
};