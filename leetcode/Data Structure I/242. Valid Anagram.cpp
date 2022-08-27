class Solution {
public:
    bool isAnagram(string s, string t) {
         map<char,int>mp;
        
        if(s.size()!=t.size()) return false;
        for(auto it : t)
        {
            mp[it]++;
        }
        
        for(int i=0;i<s.size();i++)
        {
            char s1 = s[i];
            if(mp[s1]==0)
            {
                return false;
            }
            mp[s1]--;
        }
        return true;
    }
};