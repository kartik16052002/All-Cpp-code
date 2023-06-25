#include<bits/stdc++.h>
using namespace std;

int findEquilibriumIndex(vector<int> &nums) {
    int n = nums.size();
    int leftSum[n],rightSum[n];
    // storing right sum
    int leftStore = 0;
    leftSum[0] = 0;
    for(int i=1;i<n;i++){
        leftStore += nums[i-1];
        leftSum[i] = leftStore;
    }
    // storing left sumj
    int rightStore = 0;
    rightSum[n-1] = 0;

    for(int i = n-2;i>=0;i--){
        rightStore += nums[i+1];
        rightSum[i] = rightStore;
    }

    for(int i =0;i<n;i++){
        if(rightSum[i] == leftSum[i]) return i;
    }

    return -1;
}

int main(){
    
 return 0;
}