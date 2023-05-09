class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(auto& ch: s){
            if(ch>=65 && ch<=90)
                ans+=ch+32;
            else ans+=ch;
        }
        return ans;
    }
};