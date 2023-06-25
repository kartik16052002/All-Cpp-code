#include<bits/stdc++.h>

using namespace std;



int main(){
    map<int,int> mp; // here key->number and frequency->value
    int arr[5] = {1, 2, 1, 5, 1};

    for(int i=0;i<5;i++){
        mp[arr[i]]++;
    }

    int n;
    cin>>n;
    cout<<"Occurence: "<<mp[n];

    return 0;
}