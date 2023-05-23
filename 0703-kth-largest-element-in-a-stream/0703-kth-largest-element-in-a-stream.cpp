class KthLargest {
//     Default priority_queue is max heap, below is syntax to create a min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
public:
    // insert all the values in the priority_queue
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(auto &ele: nums)
            pq.push(ele);
    }
// Now, push the new value in the pq, and simply pop all the smaller values, to return the kth value
    int add(int val) {
        pq.push(val);
        int i = pq.size()-k;
        while(i){
            pq.pop();
            i--;
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */