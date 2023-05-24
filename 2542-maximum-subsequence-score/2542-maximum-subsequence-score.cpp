class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int, int>> v;
        //store all the values from nums2 and nums1 in a pair
        for(int i=0; i<nums1.size(); i++){
            v.push_back({nums2[i], nums1[i]});
        }
        //sort the values according to maximim values from  nums2
        sort(v.rbegin(), v.rend());
        
        long long ans=0;
        long long currSum = 0;
        
        //create a min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        
        //push k-1 values in the priority_queue, and also calculate their sum
        for(int i=0; i<k-1; i++){
            currSum+=v[i].second;
            pq.push(v[i].second);
        }
        
        //then iterate the loop from k-1 to nums1.size
        //add one element to the currSum and push to it the priority_queue,
        //calculate ans and store max,
        //subtract the top value of min heap from currSum
        //and also pop it from the priority_queue
        //as we iterate through the loop, we push new elements in the pq
        //and as it is min heap automatically remove the minimum elements
        for(int i=k-1; i<nums1.size(); i++){
            currSum += v[i].second;
            pq.push(v[i].second);
            ans = max(ans, currSum*v[i].first);
            
            currSum -= pq.top();
            pq.pop();
        }
        return ans;
    }
};