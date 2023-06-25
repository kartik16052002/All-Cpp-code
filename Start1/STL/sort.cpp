#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first<p2.first) return false;

    return true;
        
}
int main(){
    int a[5] = {1,12,23,14,6};
    vector<int> v;
    v.push_back(5);
    v.emplace_back(6);
    v.emplace_back(1);
    // sort(a,a+5);
    // sort(v.begin(),v.end());

    sort(a,a+5,greater<int>()); // sorts in reverse order
    

    // sorting in your own way

    pair<int,int> arr[] = {{1,2}, {3,4}, {7,3}, {5,1}, {8,1}, {3,2}};

    // defining sorting
    // second number elements will be in ascending order
    // if second number elements are same then first acc to descending

    sort(arr,arr+6,comp);
    // printing the sorted array
    for(auto it: arr){
        cout<<it.first<<" "<<it.second<<"\n";
    }

    int max = *max_element(a,a+5);
    cout<<"Max element "<<max<<"\n";
    return 0;
}