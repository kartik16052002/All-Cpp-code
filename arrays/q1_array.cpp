// in an array find the smallest index of a repeting element 
//  if two elements are repeting then index of the element which comes first in the array 
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // creating a big array and storing -1 in it 
    const int N = 1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }

    int minidx = INT_MAX;// to store the value of min index of repating elements, it will get updated if smaller index is found
    for(int i=0;i<n;i++){
        if(idx[arr[i]] == -1){
            idx[arr[i]] = i;// storing the index of the first ocuurence of the number in idx array at the index which is equal to value of element itsef
        }
        else{
            minidx = min(minidx,idx[arr[i]]);
        }
    }

    if(minidx == INT_MAX)
        cout<<"No repeting elements"<<endl;
    else{
        cout<<"Min index is "<<minidx<<endl;
    }
    
    return 0;
}