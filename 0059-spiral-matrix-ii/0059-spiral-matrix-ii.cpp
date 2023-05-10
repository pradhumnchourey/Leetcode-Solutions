class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans (n, vector<int> (n, 0));
        
        int startingrow=0;
        int startingcol=0;
        int endingrow = n-1;
        int endingcol = n-1;
        int n2 = n*n;
        int count=1;
        while(count<=n2){
            for(int i=startingcol; count<=n2 && i<=endingcol; i++){
                ans[startingrow][i]=count++;
            }
            startingrow++;
            
            for(int i=startingrow;count<=n2 && i<=endingrow; i++){
                ans[i][endingcol] = count++;
            }
            endingcol--;
            
            for(int i=endingcol;count<=n2 && i>=startingcol; i--){
                ans[endingrow][i] = count++;
            }
            endingrow--;
            
            for(int i=endingrow;count<=n2 && i>=startingrow; i--){
                ans[i][startingcol] = count++;
            }
            startingcol++;
        }
        return ans;
    }
};