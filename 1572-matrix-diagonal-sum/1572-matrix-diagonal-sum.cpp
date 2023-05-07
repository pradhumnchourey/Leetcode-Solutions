class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0, n=mat.size(), j=n-1, i;
        for(i=0; i<n;){
            sum+=mat[i][i]+mat[i++][j--];
        }
        if(n%2!=0)
            sum -= mat[n/2][n/2];
        return sum;
    }
};