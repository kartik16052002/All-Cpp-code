#include<bits/stdc++.h>


using namespace std;


int main(){
    int arr[6] = {1,2,1,4,1,1};
    map<int,int> mpp;

    for(int i=0;i<6;i++){
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        if(it.second>=3){
            cout<<it.first;
        }
    }
    
    
 return 0;
}