class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_l = s.length(), t_l =t.length();
        if(s_l!=t_l)
            return false;
        map<char, int> s_mp, t_mp;
        for(int i=0; i<s_l; i++){
            s_mp[s[i]]++;
            t_mp[t[i]]++;
        }
        for(int i=0; i<s_mp.size(); i++){
            if(s_mp[i]!=t_mp[i])
                return false;
        }
        return true;
    }
};