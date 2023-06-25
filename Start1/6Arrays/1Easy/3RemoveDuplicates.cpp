#include<bits/stdc++.h>

using namespace std;



int main(){
    // removing duplicates in SORTIED array-> storing in initial part of the array

    int arr[35] = {8, 2, 5, 6, 14, 0, 3, 0, 1001, 54, 7, 14, 102, 963, 0, 3, 5, 4, 1, 54, 687, 102, 4, 8, 6, 2, 15, 7, 4, 1, 10, 7, 9, 3, 2};

    // bruteforce approach

    // set<int> s;
    // for(int i=0; i<35; i++){
    //     s.insert(arr[i]); // insertion TC->O(log N)
    // }
    // int i = 0;
    // for(auto it: s){
    //     arr[i]  = it;
    //     i++;
    // }


    // for(int i: arr){
    //     cout<<i<<" ";
    // }

    // optimal way for SORTED array only

    // sort(arr,arr+35);
    // int i = arr[0],j = arr[1];

    // while(j<35){
    //     if(arr[i] != arr[j]){
    //         i++;
    //         arr[i] = arr[j];
    //     }
    //     j++;
    // }


    // for(int i: arr){
    //     cout<<i<<" ";
    // }




    return 0;
}