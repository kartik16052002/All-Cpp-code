#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>arr;
    arr.push_back(-10);
    arr.push_back(-40);
    arr.push_back(-25);
    arr.push_back(-12);
    arr.push_back(-25);
    arr.push_back(-10);

    int l = arr[0];
    int sl = INT_MIN;
    
    for(int i=1;i<arr.size();i++){
        
        
        if(arr[i] > l){
            
            sl = l;
            l = arr[i];
        }
        else if(arr[i] > sl && arr[i]!=l){
            
            sl = arr[i];
        }
    }

    cout<<sl;

    
}