#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=10;
    int arr[n] = {1,2,-8,5,-4,6,9,-2,-9,-7};

    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){

        if(i%2 == 0){
            if(arr[i]<0){
                for(int j=i+1;j<n;j++){
                    if(arr[j]>=0){
                        int temp = arr[j];
                        for(int k=j;k>i;k--){
                            arr[k] = arr[k-1];
                        }
                        arr[i] = temp;

                    break;
                        
                    }
                }
            }
        }

        else{
            if(arr[i]>=0){
               for(int j=i+1;j<n;j++){
                    if(arr[j]<0){
                        int temp = arr[j];
                        for(int k=j;k>i;k--){
                            arr[k] = arr[k-1];
                        }
                        arr[i] = temp;
                        break;
                        
                    }

                } 
            }
        }
    }
    cout<<"\n";
    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}