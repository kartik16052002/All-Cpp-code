// vector < int > sortedArray(vector < int > a, vector < int > b) {
//     // Write your code here
//     vector<int> unionArr;
//     int i=0,j=0;
//     int n = a.size();
//     int m = b.size();

//     while(i<n && j<m){

//         if(a[i]<=b[j]){
//             if(unionArr.size()==0 || unionArr.back()!=a[i]){
//                 unionArr.push_back(a[i]);
//             }
//             i++;
//         }
//         else{
//             if(unionArr.size()==0 || unionArr.back()!=b[j]){
//                 unionArr.push_back(b[j]);
//             }
//             j++;

//         }
    
//     }

//     while(i<n){
//             if(unionArr.size()==0 || unionArr.back()!=a[i]){
//                 unionArr.push_back(a[i]);
//             }
//             i++;
        
//     }

//     while(j<m){
//         if(unionArr.size()==0 || unionArr.back()!=b[j]){
//                 unionArr.push_back(b[j]);
//             }
//             j++;
//     }

//     return unionArr;


// }