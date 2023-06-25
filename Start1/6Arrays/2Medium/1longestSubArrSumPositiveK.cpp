#include<bits/stdc++.h>

using namespace std;

int getLongestSubarray(vector<int>& a, int k){
    // CONCEPT --  if there are only positive numbers present in the array then we will use two pointers approach in which we
    // move the front pointer and if it excees sum value then we will move back pointer and sub the value(before moving pointer) from whole sum
    // if there are negatives too in the array then while iterating through the array, we will store the sum at each stage through map (key->sum and val-> index)
    // and let at a certain stage if current sum - k value is present in map then it means that there exist array starting from (currentSum - k)->index which is stored im map  and ending at current pos

    // first see for positive only case (easier)
    // remSum is sum at current stage - k
    // map used is for storing the sum (at each stage) while iterating because it will be used afterward for
    // seeing that remSum is present or not
    // map, key is sum and val is index
    // if remSum(currentSum - k) is present in map it means that there is array with sum k starting from the index (index where Sum =  remSum (stored by map))
    
    unordered_map<long long,int> preSum;
    int maxLen = 0;
    long long sum = 0;

    
    

    for(int i=0;i<a.size();i++){
        // storin of preSum at bottom
        sum += a[i];
        if(sum == k)    maxLen = max(maxLen,i+1);

        int rem = sum-k; // will check if it is available in map

        if(preSum.find(rem) != preSum.end()){ // means rem is present in map and it also means there is a array present with sum k
            int len = i - preSum[rem]; // preSum[rem] gives index value
            maxLen = max(maxLen,len);
        }

        // storing of sum at each stage of loop in map
        // if a[i] = 0, the sum is same and its index value should not update
        if(preSum.find(sum) == preSum.end()){ // check of edge case(for 0), if 0 is present in the array this check is neccessary
            preSum[sum] = i;
        }
    }

    return maxLen;
}


int longestSubarrayWithSumKPositive(vector<int> a, long long k){
    // Write your code here
    int left=0,right=0;
    long long sum = a[0];
    int maxLen=0;
    int n = a.size();

    while(right<n){
        if(sum>k && left<=right){
            sum -= a[left];
            left++;
        }

        if(sum == k){
            maxLen = max(maxLen,right-left+1);
        }

        right++;
        if(right<n) sum+=a[right];
    }


    return maxLen;
    
    
}


int main(){
    int n = 10,sum=0,len=0;
    int arr[n] = {1,2,3,1,0,1,1,4,2,3};

    int k; // positive k
    cin>>k;


    // // bruteforce
    // for(int i=0;i<n;i++){
    //     sum = 0;
    //     for(int j = i;j<n;j++){
    //         sum += arr[j];
    //         int s = j-i+1;
    //         if(sum == k) len = max(len,s);
    //     }
    // }

    // cout<<"Maximum length with sum k is : "<<len<<"\n";

    // better, optimal if array contains negative number
    // see function

    // optimal see function
    



    
		


    

    return 0;
}