class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        int flag=0;
        for(int i=s.length()-1; i>=0; i--){
            if(flag && s[i]==' ')
                return ans;
            if(s[i]!=' '){
                flag=1;
                ans++;
            }
        }
        return ans;
    }
};