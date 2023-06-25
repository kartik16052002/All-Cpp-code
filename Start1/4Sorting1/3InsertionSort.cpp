#include<bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}