#include<bits/stdc++.h>

using namespace std;



int main(){
    int n = 10,cnt = 0;
    int arr[n] = {1,0,5,6,0,0,6,0,8,0};

    // bruteforce

    // for(int i =0;i<n;i++){
    //     if(arr[i]==0)   cnt++;
    // }

    // considering the case that zeros is  present in last if not add
    // for(int i = 0; i<cnt; i++){
        
    //     if(arr[i] == 0){
    //         for(int j = i; j<n-1; j++){
    //             arr[j] = arr[j+1];
    //         }
    //         i--;
    //     }
    // }

    

    // for(int i: arr){
    //     cout<<i<<" ";
    // }


    // optimal

    int j = -1,flag = 1;

    // cal start pos of 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    for(int i = 0;i<n;i++){
        if(j==-1) break; // if 0 is not present

        if(arr[i] != 0  && i>j){
            swap(arr[i],arr[j]);// moving zero forward
            j++; // again pointing to first zero element after non-zero elements
        }
    }
        


    for(int i: arr){
        cout<<i<<" ";
    }

   

    return 0;
}