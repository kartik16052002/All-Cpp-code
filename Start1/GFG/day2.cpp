//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        int leftlargest[N];
        int rightsmallest[N];
        
        int l = A[0];
        int r = A[N-1];
        int count = 0;

        for(int i=0;i<N;i++){
           l = max(l,A[i]);
           leftlargest[i] = l;
        }

        for(int i=N-1;i>=0;i--){
            r = min(r,A[i]);
            rightsmallest[i] = r;
        }

        for(int i=0;i<N;i++){
            if(leftlargest[i]+rightsmallest[i] >= K){
                count++;
            }
        }

        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends