#include<bits/stdc++.h>

using namespace std;


// time complexity -> O(n^2)
int main(){
    int n,min,min_ind;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // selction sort

    

    for(int i=0;i<n-1;i++){
        min = arr[i];
        min_ind = i;
        for(int j = i;j<n-1;j++){
            if(arr[j+1]<min){
                min = arr[j+1];
                min_ind = j+1;
            }
        }
        swap(arr[i],arr[min_ind]);
    }

    for( int i: arr){
        cout<<i<<" ";
    }

    return 0;
}