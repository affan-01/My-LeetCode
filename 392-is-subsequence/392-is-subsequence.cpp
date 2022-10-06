class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p1 = 0 , p2 = 0;
        while(p2 < t.size())
        {
            if(t[p2] == s[p1])
            {
                p1++;
                p2++;
            }
            else
                p2++;
        }
        if(p1 == s.size())
            return true;
        else
            return false;
    }
};