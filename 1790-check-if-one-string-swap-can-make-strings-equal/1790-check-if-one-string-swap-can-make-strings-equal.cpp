class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
            return true;
        string s3=s1, s4=s2;
        sort(s3.begin(), s3.end());
        sort(s4.begin(), s4.end());
        if(s3!=s4)
            return false;
        int len = s1.length();
        map<int, char> mpp1, mpp2;
        for(int i=0; i<len; i++){
            mpp1[i]=s1[i];
            mpp2[i]=s2[i];
        }
        int count=0;
        for(int i=0; i<mpp1.size(); i++){
            if(mpp1[i]!=mpp2[i])
                count++;
        }
        return count==2 ? true : false;
    }
};