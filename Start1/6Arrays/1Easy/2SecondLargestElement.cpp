// #include<bits/stdc++.h>

// using namespace std;



// int main(){
//     int arr[35] = {8, 2, 5, 6, 14, 0, 3, 0, 1001, 54, 7, 14, 102, 963, 0, 3, 5, 4, 1, 54, 687, 102, 4, 8, 6, 2, 15, 7, 4, 1, 10, 7, 9, 3, 2};
//     // 0->3 1->2 2->3  3->3  4->3  5->2  6->2  7->3  8->2  9->1  10->1  14->2  15->1  54->2  102->2  687->1  963->1  1001->1
//     // 17 unique elements
    
//     int largest = arr[0];
//     int sec_largest = -1;
//     for(int i = 1; i<35; i++){
//         if(arr[i] > largest){
//             sec_largest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] < largest && arr[i] > sec_largest){
//             sec_largest=arr[i];
//         }

//     }
//         cout<<"Second largest element is: "<<sec_largest;

    

//     return 0;
// }