// class Solution {
//   public:
//     int bitMagic(int n, vector<int> &arr) {
//         int i=0,j=n-1,no_of_operation = 0;
//         while(i<j){
//             if(arr[i] != arr[j]) no_of_operation++;
//             i++; j--;
//         }
//         if(no_of_operation % 2 == 0) return no_of_operation/2;
//         return no_of_operation/2+1;
//     }
// };
