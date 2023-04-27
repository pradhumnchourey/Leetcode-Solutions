class Solution {
public:
    int bulbSwitch(int n) {
        if(n<2)
            return n;
        int ans=1;
        while(ans<n){
            if(ans*(ans+2)<n)
                ans++;
            else return ans;
        }
        return n;
    }
};