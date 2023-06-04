class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int currNode){
        //set visited for curr city as true
        visited[currNode] = true;
        
        //for each city in the curr city's vector
        for(int neighbour=0; neighbour<isConnected.size(); neighbour++){
            
//if curr city is connected to neighbour city and  neighbour city is not been visited yet
            if(isConnected[currNode][neighbour]==1 && !visited[neighbour]){
                
                //call dfs for that neighbour, and so on for all the neighbours
                dfs(isConnected, visited, neighbour);
            }
        }
    }
    //in this way one dfs call will traverse all the connected cities
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int provinces = 0;
        
        //bool array to store if the city is already visited or not
        vector<bool> visited(n, false);
        
        //for each city
        for(int i=0; i<n; i++){
            //if it is not already been visited, that means it is in a new province
            if(!visited[i]){
                //therefore increment province
                provinces++;
                
                //and call dfs for this city, which will visit all the direct and indirect cities connected to curr city
                dfs(isConnected, visited, i);
            }
        }
        return provinces;
    }
};