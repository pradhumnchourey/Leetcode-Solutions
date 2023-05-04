class Solution {
public:
    string predictPartyVictory(string senate) {
        vector<char> s;
        for(char ch: senate){
            s.push_back(ch);
        }
        while(!s.empty()){
            for(int i=0; i<s.size(); i++){
                if(s[i]=='R'){              //if the ith element is R
                    auto temp = find(s.begin(), s.end(), 'D');  //find D in the vector
                    if(temp==s.end())       //if D is not present
                        return "Radiant";   //Radiant has won the game
                    //else search for D, from that index, in rest of the array
                    auto temp1 = find(s.begin()+i, s.end(), 'D');   
                    if(temp1!=s.end())      //if D is present in rest of the array
                        s.erase(temp1);     //delete it
                    else if(temp!=s.end())  //else if D is present in the array anywhere
                        s.erase(temp);      //delete its first occurance
                }
                else{                       //if the ith element is D
                    auto temp = find(s.begin(), s.end(), 'R');      //find R in the vector
                    if(temp==s.end())       //if R is not present
                        return "Dire";      //Dire has won the game
                    //else find R in the rest of the array
                    auto temp1 = find(s.begin()+i, s.end(), 'R');
                    if(temp1!=s.end())      //if R is present in rest of the array
                        s.erase(temp1);     //delete it
                    else if(temp!=s.end())  //else if R is present in the array anywhere
                        s.erase(temp);      //delete its first occurance
                }
            }
        }
        return "";
    }
};