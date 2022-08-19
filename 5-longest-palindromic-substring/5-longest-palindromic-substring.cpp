class Solution {
public:
    string longestPalindrome(string s) {
        int max_diff = INT_MIN , ans_l , ans_h , n = s.size();
        string res = "";
        for(int i = 0 ; i < n ; ++i)
        {
            int l = i , h = i ;
            while((l >= 0 && h < n) && (s[l] == s[h]))
            {
                l--;
                h++;
            }
            if(h-l > max_diff)
            {
                ans_l = l+1;
                ans_h = h-1;
                max_diff = h-l;
            }
        }
        for(int i = 0 ; i < n-1 ; ++i)
        {
            if(s[i] == s[i+1])
            {
                int l = i , h = i+1 ;
                while((l >= 0 && h < n) && (s[l] == s[h]))
                {
                    l--;
                    h++;
                }
                if(h-l > max_diff)
                {
                    ans_l = l+1;
                    ans_h = h-1;
                    max_diff = h-l;
                }
            }
        }
        
       for(int i = ans_l ; i <= ans_h ; ++i)
           res += s[i];
        return res;
    }
};