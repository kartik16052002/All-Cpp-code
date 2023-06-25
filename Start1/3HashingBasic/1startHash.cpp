#include<bits/stdc++.h>

using namespace std;



int main(){
    
    // Array input
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Entered array is:\n";
    for( int i: arr){
        cout<<i<<" ";
    }
    cout<<"\n";
    // prestoring

    int hash_array[13] = {0}; // for storing frequency of occurence till 12
    for(int i=0;i<n;i++){
        hash_array[arr[i]] += 1;
    }

    //
    int t,p;
    cout<<"No of test cases: ";
    cin>>t;
    while(t--){
        cout<<"Number: ";
        cin>>p;
        cout<<"No of occurence is: "<< hash_array[p]<<"\n";
    }

    return 0;
}