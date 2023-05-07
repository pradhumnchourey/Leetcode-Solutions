class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0; i<n; i++){
            sum+=mat[i][i];
        }
        int i=0;
        for(int j=n-1; j>=0; j--){
            sum+=mat[i][j];
            i++;
        }
        if(n%2!=0)
            sum -= mat[n/2][n/2];
        return sum;
    }
};