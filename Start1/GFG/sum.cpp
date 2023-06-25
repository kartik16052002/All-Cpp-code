#include<bits/stdc++.h>
using namespace std;

long long int sumOfNaturals(int n) {
        // code here
        int m = 1e9 +7;
        long long int s = (long long int)n;
        long long int val = (s*s + s)/2;
        
        return val;
    }

int main(){
    int n;
    cin>>n;
    cout<<sumOfNaturals(n);
    // int m  = 1e9 + 7;
    // cout<<m;
 return 0;
}