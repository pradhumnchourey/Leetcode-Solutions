class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1)
            return true;
        int last = nums[nums.size()-1];
        if(nums[0]<last){
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i]>nums[i+1])
                    return false;   
            }
        }
        else if(nums[0]>last){
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i]<nums[i+1])
                    return false;   
            }
        }
        else if(nums[0]==last){
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i]!=nums[i+1])
                    return false;
            }
        }
        return true;
    }
};