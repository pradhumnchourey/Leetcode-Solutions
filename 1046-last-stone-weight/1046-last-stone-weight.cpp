class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(), stones.end(), greater<int>());
            int temp = stones[0]-stones[1];
            stones.erase(stones.begin(), stones.begin()+2);
            if(temp)
                stones.push_back(temp);
        }
        if(stones.empty())
            return 0;
        return stones[0];
    }
};