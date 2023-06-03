class Solution {
public:
    int dfs(int head, int& sum, vector<int>& informTime, unordered_map<int, vector<int>>& adjList){
        int max_time = 0;
                
        //if the ID called head is present in the map, then only call for loop for its subordinates
        if(adjList.find(head)!=adjList.end())
            //for each subordinate in the vector at key=head in the map
            for(auto subordinate: adjList[head])
                //again call dfs for its subordinate and so on, i.e. depth first search
                max_time = max(max_time, dfs(subordinate, sum, informTime, adjList));
        
        if(max_time == sum)
            return max_time;
        
        //return max_time + informTime of that manager or head
        return max_time + informTime[head];
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        //map to store all the suboridnates of a manager int a vector
        unordered_map<int, vector<int>> adjList;
        
        int sum = accumulate(informTime.begin(), informTime.end(), 0);
        
        //iterate for manager vector
        for(int i=0; i<manager.size(); i++)
            if(manager[i]!=-1)                      //the head doesn't have any manager
        //manager[i] gives the manager of ith employee, so in the map at manager[i] means for ith manager, push i, i.e. push this employee
        //for example at index 1 we have 2, so at key=2 in the push 1, i.e. employee ID 1 is the subordinate of manager with id 2
                adjList[manager[i]].push_back(i);
        
        //now since we have all the subordinates of every employee, call dfs for the head, with informTime and adjList
        return dfs(headID, sum, informTime, adjList);
    }
};