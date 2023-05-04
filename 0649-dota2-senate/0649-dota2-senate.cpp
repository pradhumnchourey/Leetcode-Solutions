class Solution {
public:
    string predictPartyVictory(string senate) {
        vector<char> s;
        for(char ch: senate){
            s.push_back(ch);
        }
        while(!s.empty()){
            for(int i=0; i<s.size(); i++){
                if(s[i]=='R'){
                    auto temp = find(s.begin(), s.end(), 'D');
                    if(temp==s.end())
                        return "Radiant";
                    auto temp1 = find(s.begin()+i, s.end(), 'D'); 
                    if(temp1!=s.end())
                        s.erase(temp1);
                    else if(temp!=s.end())
                        s.erase(temp);
                }
                else{
                    auto temp = find(s.begin(), s.end(), 'R');
                    if(temp==s.end())
                        return "Dire";
                    auto temp1 = find(s.begin()+i, s.end(), 'R'); 
                    if(temp1!=s.end())
                        s.erase(temp1);
                    else if(temp!=s.end())
                        s.erase(temp);
                }
            }
        }
        return "";
    }
};