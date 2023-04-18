class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string res = "";
        for(int i=0; i<w1.length() || i<w2.length(); i++){
            if(i<w1.length())
                res+=w1[i];
            if(i<w2.length())
                res+=w2[i];
        }
        return res;
    }
};