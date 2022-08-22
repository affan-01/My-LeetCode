class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char,int> mp;
        string ans = "" ;
        for(int i = 0 ; i < s.size() ; ++i)
        {
            mp[s[i]]++;
        }
        vector <pair<int,char>> freq;
        unordered_map<char,int> :: iterator it;
        for(it = mp.begin() ; it != mp.end() ; ++it)
        {
            freq.push_back({it->second,it->first});
        }
        sort(freq.begin() , freq.end());
        for(int i = freq.size()-1 ; i >= 0 ; --i)
        {
            while(freq[i].first > 0)
            {
                ans += freq[i].second;
                freq[i].first -= 1;
            }
        }
        return ans;
    }
};