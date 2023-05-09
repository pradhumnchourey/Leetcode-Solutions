class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mpp;
        for(auto& ch: s)
            mpp[ch]++;
        for(auto& ch: t)
            if(--mpp[ch]<0)
                return ch;
        return '\0';
    }
};