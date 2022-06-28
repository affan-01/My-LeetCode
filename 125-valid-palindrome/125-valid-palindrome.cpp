class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(s[i] <= 'z' && s[i] >= 'a')
            {
                s[i] -= 32;
                ans += s[i];
            }
            else if(s[i] <= 'Z' && s[i] >= 'A')
                ans += s[i];
            else if(s[i] <= '9' && s[i] >= '0')
                ans += s[i];
            else
            continue;   
        }
        
        int l = 0 , r = ans.size()-1;
        while(l < r)
        {
            if(ans[l] != ans[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};