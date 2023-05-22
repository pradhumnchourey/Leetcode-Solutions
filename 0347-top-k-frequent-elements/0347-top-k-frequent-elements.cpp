class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //first make a map to store the frequencies of each element
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size();i++){
            m[nums[i]]++;
        }
    //then store those frequencies, in a set with their values, as pairs<freq, values>
        set<pair<int,int>> s;
        for(int i = 0; i < nums.size();i++){
            s.insert(make_pair(m[nums[i]],nums[i]));
        }
        vector<int> ans;
        auto it = --s.end();        //iterator it points to the last element of the set
        for(int i=0; i<k; i++){     //run the loop k time
            //push the second value of the pair, i.e. original value from nums
            ans.push_back((*it).second);
            it--;
        }
        return ans;
    }
};