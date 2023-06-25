// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	// Write your code here.
// 	vector<int> intersectionArr;
// 	int i=0,j=0;
// 	int n1 = arr1.size();
// 	int n2 = arr2.size();

// 	while(i<n1 && j<n2){
// 		if(arr1[i] == arr2[j]){
// 			intersectionArr.push_back(arr1[i]);
// 			i++; j++;
// 		}
// 		else if(arr1[i] < arr2[j]){
// 			i++;
// 		}
// 		else{
// 			j++;
// 		}
// 	}


// 	return intersectionArr;
// }