#define ll long long int
class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int>& visited, int &count, int &i){
        visited[i]=1;                   //mark the node as visited
        count++;                        //increment count
        
        //for all the adj node of the current node or bomb
        for(int j=0; j<adj[i].size(); j++){
            if(visited[adj[i][j]]==0)                   //if it is not already visited
                dfs(adj, visited, count, adj[i][j]);    //call dfs for that node
        }
    }
    
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        
        //create a graph named adj, this stores adj nodes for each node, i.e. in this case stores all the bombs which can be detonated by the curr bomb(node)
        vector<vector<int>> adj(n);
        
        int max_count=0;
        //for all the bombs
        for(int i=0; i<n; i++){
            
            ll x1 = bombs[i][0];
            ll y1 = bombs[i][1];
            ll r1 = bombs[i][2];
            
            for(int j=0; j<n; j++){
                //check the bombs otherthan itself
                if(i!=j){

        //equation of circle is (x2-x1)^2 + (y2-y1)^2 = r^2, if the point (x2, y2) is inside the circle, the lhs would be less than r^2, if it is on the circle lhs = r^2, if lhs > r^2, point is outside the circle.
                    
                    ll x = abs(bombs[j][0] - x1);
                    ll y = abs(bombs[j][1] - y1);
                    
        //if the jth bomb is inside ith bomb's radius, push it as adj of i
                    if(x*x + y*y <= r1*r1)
                        adj[i].push_back(j);
                }
            }
        }
        
    //now we have adj of each bomb or node, so traverse for each node and calculate max_count using dfs
        for(int i=0; i<n; i++){
            //visited vector to keep track of visited or detonated bombs
            vector<int> visited(n,0);
            int count=0;                        //temp count
            dfs(adj, visited, count, i);
            max_count = max(max_count, count);
            
            //if max_count has reached n, it can simply be returned as it can't be greater than n, and no need to check further
            if(max_count==n)
                return max_count;
        }
        
        return max_count;
    }
};