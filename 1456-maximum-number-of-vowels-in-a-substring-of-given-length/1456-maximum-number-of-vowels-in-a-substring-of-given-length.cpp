class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int maxCount=0, count=0;
        for(int i=0; i<s.length(); i++){
            if(vowels.count(s[i]))              //if ith char is vowel
                count++;                        //then increment count
            if(i>=k && vowels.count(s[i-k]))    //if i>=k, i.e. after the first window, and (i-k)th char which has now moved out of the window, was a vowel
                count--;                        //then decrement count
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};