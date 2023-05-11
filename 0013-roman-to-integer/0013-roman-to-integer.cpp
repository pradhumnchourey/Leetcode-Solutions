class Solution {
public:
    int romanToInt(string s) {
        //First we'll create a hash_map, of chars and their values
        unordered_map<char, int> mpp = {{'I',1},
                                        {'V',5},
                                        {'X',10},
                                        {'L',50},
                                        {'C',100},
                                        {'D',500},
                                        {'M',1000}};
        //now initialise the ans variable with the value of last char of the string s
        int ans=mpp[s[s.length()-1]];
        for(int i=s.length()-2; i>=0; i--){   //iterate over the string backwards
            if(mpp[s[i]]<mpp[s[i+1]])         //if value of ith char is less than, i+1th char
                ans-=mpp[s[i]];               //then subtract it from ans
            else ans+=mpp[s[i]];              //else add the value of char in ans
        }
        return ans;
    }
};