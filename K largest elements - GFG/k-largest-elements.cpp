//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        //create a min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        //push first k elements into the min heap
        for(int i=0; i<k; i++){
            pq.push(arr[i]);
        }
        //now for elements from k-n, if the ith element of array is greater than
        //top(smallest) element of the min heap, remove it from the heap
        //and insert the ith element in the pq
        //in this manner we have k largest elements of
        for(int i=k; i<n; i++){
            if(arr[i]>pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        //for k largest elements return res vector, for kth largest element return pq.top()
        
        //create a result vector of size k and initialize with 0
        vector<int> res(k,0);
        
        //set ith element of vector res as pq.top
        for(int i=k-1; i>=0; i--){
            res[i] = pq.top();
            pq.pop();
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends