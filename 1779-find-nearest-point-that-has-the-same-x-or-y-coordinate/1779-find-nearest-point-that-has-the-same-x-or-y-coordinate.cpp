class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = -1;
        int min=INT_MAX;
        int n = points.size();
        for(int i=0; i<n; i++){
            int a=points[i][0], b=points[i][1]; 
            if(x==a || y==b){
                int dist = abs(x-a)+abs(y-b);
                if(dist<min){
                    min=dist;
                    ans=i;
                }
            }
        }
        return ans;
    }
};