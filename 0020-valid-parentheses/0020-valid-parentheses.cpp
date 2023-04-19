class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, int> symbols = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
        stack<int> st;
        for(char brackets: s){
            if(symbols[brackets]<0){
                st.push(brackets);
            }
            else{
                if(st.empty())
                    return false;
                char top = st.top();
                st.pop();
                if(symbols[brackets]+symbols[top]!=0) 
                    return false;
            }
        }
        return st.empty();   
    }
};