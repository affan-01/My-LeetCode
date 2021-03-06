class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map <int,int> m1 ;
        unordered_map <int,int> m2 ;
        
        for(int i = 0 ; i < ransomNote.size() ; ++i)
            m1[ransomNote[i]]++;
        for(int i = 0 ; i < magazine.size() ; ++i)
            m2[magazine[i]]++;
        
        for(int i = 0 ; i < ransomNote.size() ; ++i)
        {
            if(m2.find(ransomNote[i])!=m2.end() && m1[ransomNote[i]] <= m2[ransomNote[i]])
                continue;
            else
                return false;
        }
        return true;
        
    
        
    }
};