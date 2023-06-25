#include<bits/stdc++.h>

using namespace std;



int main(){
    int n,min,min_ind,didswap;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // bubble sort

    for(int i=0;i<n-3;i++){
        didswap = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap = 1;
            } 
        }
        if(didswap == 0) break; // modification for improvement
    }
    for( int i: arr){
        cout<<i<<" ";
    }
    return 0;
}