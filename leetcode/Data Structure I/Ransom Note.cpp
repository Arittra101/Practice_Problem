class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int>mp;
        
        for(auto it : magazine)
        {
            mp[it]++;
        }
        
        for(int i=0;i<ransomNote.size();i++)
        {
            char s1 = ransomNote[i];
            if(mp[s1]==0)
            {
                return false;
            }
            mp[s1]--;
        }
        return true;
    }
};