class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //stores the number of rows in the matrix
        int m=matrix.size();
        //stores the number of columns in the matrix
        int n = matrix[0].size();
        
        //row and col bool values store the true if there are any 0's in the 
        //first row or the col, as it will be used as marker
        bool row=false, col=false;
        for(int i=0; i<n; i++)
            if(matrix[0][i]==0)         //if any of the first row value is 0, set row=true
                row=true;
        for(int i=0; i<m; i++)
            if(matrix[i][0]==0)         //if any of the first col value is 0, set col=true
                col=true;
        
        //for each element of the matrix, if it is 0
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    //set the first element of that column = 0, as a marker
                    matrix[i][0]=0;
                    //set the first element of that row = 0, as a marker
                    matrix[0][j]=0;
                }
            }
        }
        //now starting from 1st row not the 0th row, check if its first element is 0
        //set all the elements of that row = 0
        for(int i=1; i<m; i++)
            if(matrix[i][0]==0)
                for(int j=0; j<n; j++)
                    matrix[i][j]=0;
        
        //now starting from 1st column not the 0th column, check if its first element is 0
        //set all the elements of that column = 0
        for(int i=1; i<n; i++)
            if(matrix[0][i]==0)
                for(int j=0; j<m; j++)
                    matrix[j][i]=0;
        
        //if the 0,0th element is zero set all the elements of that row and column as 0
        if(matrix[0][0]==0){
            if(row==true)                   //if the row is set true
                for(int i=0; i<n; i++)      //then set all the values of first row as 0
                    matrix[0][i]=0;
            if(col==true)                   //if the row is set true
                for(int i=0; i<m; i++)      //then set all the values of first row as 0
                    matrix[i][0]=0;
        }
    }
};