#include<bits/stdc++.h>

using namespace std;

void merge(int arr[], int low, int mid, int high){

    int temp_array[high-low+1];
    
    int left = low;
    int right = mid+1;
    int i =0;

    while(left<=mid && right<=high){
        
        if(arr[right] < arr[left]){
            temp_array[i] = arr[right];
            i++; right++;

            
        }
        else{
            temp_array[i] = arr[left];
            i++; left++;

            
        }
    }

    while(left<=mid){
        temp_array[i] = arr[left];
        i++; left++;
    }

    while(right<=high){
        temp_array[i] = arr[right];
        i++; right++;
    }

    for(int j = low;j<=high;j++){
        arr[j] = temp_array[j-low];
    }


}


void mergeSort(int arr[], int low, int high){
    if(low == high) return;
    int mid = (low + high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}



int main(){
    int arr[10] = {5, 2, 8, 45, 32, 97, 54, 8, 9, 68};
    mergeSort(arr,0,9);
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}