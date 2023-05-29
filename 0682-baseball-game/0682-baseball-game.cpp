class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int ans=0;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="D")
                s.push(2*s.top());
            else if(operations[i]=="C")
                s.pop();
            else if(operations[i]=="+"){
                int temp = s.top();
                s.pop();
                int temp2 = s.top() + temp;
                s.push(temp);
                s.push(temp2);
            }
            else s.push(stoi(operations[i]));
        }
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};