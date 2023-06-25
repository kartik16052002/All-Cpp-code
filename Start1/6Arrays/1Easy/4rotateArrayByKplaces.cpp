#include<bits/stdc++.h>

using namespace std;



int main(){
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    
    // rotating array left by 1

    // int temp = arr[0];
    // for(int i=0;i<7;i++){
    //     arr[i] = arr[i+1];
    // }
    // arr[6] = temp;
    // for(int i: arr){
    //     cout<<i<<" ";
    // }

    // rotating by k places

    // bruteforce approach

    // int k;
    // cin>>k;
    // int d = k%7;

    // int temp[d];
    // for(int i=0;i<d;i++){
    //     temp[i] = arr[i];
    // }

    // for(int i = d; i<7; i++){
    //     arr[i-d] = arr[i];
    // }
    
    // int j = 0;
    // for(int i =(7-d); i<7; i++){
    //     arr[i] = temp[j];
    //     j++;
    // }
    
    // for(int i: arr){
    //     cout<<i<<" ";
    // }

    // optimal


    // int k;
    // cin>>k;

    // int d = k%7;

    // reverse(arr,arr+d);
    // reverse(arr+d,arr+n);
    // reverse(arr,arr+n);
    // for(int i: arr){
    //     cout<<i<<" ";
    // }



    // // right rotation by k places

    // int k;// no of rotation
    // cin>>k;

    // int d = k%n;
    // reverse(arr,arr+(n-d));
    // reverse(arr+(n-d),arr+n);
    // reverse(arr,arr+n);
    // for(int i: arr){
    //     cout<<i<<" ";
    // }

    return 0;
}