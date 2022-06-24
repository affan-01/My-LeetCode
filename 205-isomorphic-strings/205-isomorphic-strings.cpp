class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map <char,char> mp;
        unordered_set <char> se;
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(mp.find(s[i]) == mp.end() && se.find(t[i]) == se.end())
            {
                mp[s[i]] = t[i];
                se.insert(t[i]);
            }
            else{
                if(mp[s[i]] != t[i] || mp.find(s[i]) == mp.end())
                return false;
            }
        }
        return true;
    }
};