//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int n){
    int binaryNum[32];
    int i=0;
    while(n>0){
        binaryNum[i++]=n%2;
        n/=2;
    }
    for(int j=i-1; j>=0; j--){
        cout<<binaryNum[j];
    }
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends