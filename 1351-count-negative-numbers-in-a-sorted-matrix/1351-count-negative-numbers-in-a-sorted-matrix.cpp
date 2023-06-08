class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size()-1;
        int cols = grid[0].size();
        int col=0, count=0;
        while(rows>=0 && col<cols){
            if(grid[rows][col]<0){
                count += cols-col;
                rows--;
            }
            else col++;
        }
        return count;
    }
};