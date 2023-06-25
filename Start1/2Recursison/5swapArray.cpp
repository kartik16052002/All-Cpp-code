#include<bits/stdc++.h>

using namespace std;

void rev_array(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    rev_array(i+1,arr,n);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};

    rev_array(0,arr,6);
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}