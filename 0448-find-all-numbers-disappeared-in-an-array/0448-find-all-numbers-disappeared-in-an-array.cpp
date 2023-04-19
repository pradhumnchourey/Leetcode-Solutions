class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
// In this approach, we traverse through each element, at its index (0 based),
// store a negative integer, and at last at all those index where positive integer exist
// those elements were not present in the array, push them in result     
// say nums[1]= 4, then at 4-1=3, at nums[3], we have 7, replace it with -7
        
        vector<int> res;
        int n = nums.size();
        for(int i=0; i<n; i++){
// abs(nums[i]) because, negative numbers at nums[i], which will throw, runtime error
            int idx = abs(nums[i])-1;
// if nums[idx]>0, then nums[idx]=-num[idx] else nums[idx]=nums[idx]
            nums[idx] = (nums[idx]>0)? -nums[idx] : nums[idx];
        }
        
        for(int i=0; i<n; i++){
            if(nums[i]>0)               //for the index with vales greater than zero
                res.push_back(i+1);     //push i+1, in result
        }
        return res;
    }
};