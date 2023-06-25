#include<bits/stdc++.h>

using namespace std;
int partition(int arr[], int low, int high){
    int i = low +1;
    int j = high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }

    swap(arr[low],arr[j]);
    return j;

}
void QuickSort(int arr[],int low, int high){
    int partition_index;
    if(low < high){
        partition_index = partition(arr,low,high);
        QuickSort(arr,low,partition_index-1);
        QuickSort(arr,partition_index+1,high);
    }
}

int main(){
    int arr[10] = {5, 2, 8, 45, 32, 97, 54, 8, 9, 68};
    QuickSort(arr,0,9);
    for(int i: arr){
        cout<<i<<" ";
    }

    return 0;
}