class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& num1, vector<int>& num2) {
        vector<int> ans;
        int flag=0;
        for(int i=0; i<num1.size(); i++){
            flag=0;
            auto it = find(num2.begin(), num2.end(), num1[i]);
            for(auto itr=it; itr!=num2.end(); itr++){
                if(*itr>num1[i]){
                    ans.push_back(*itr);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                ans.push_back(-1);
        }
        return ans;
    }
};