//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int temp = n;
        int count = 0;
        while(temp){
            count++;
            temp /= 10;
        }
        int sumOfDigits = 0;
        temp = n;
        while(temp){
            int digit = temp%10;
            sumOfDigits += pow(digit, count);
            temp /= 10;
        }
        
        return (n==sumOfDigits) ? "Yes" : "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends