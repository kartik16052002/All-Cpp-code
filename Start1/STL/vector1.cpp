#include<iostream>
#include<vector>

using namespace std;


int main(){

    vector <int>v1{10,20,30,40,50,60};
     
     // iterating explicitly

    //  for(auto it = begin(v1);it!=end(v1);it++){
    //     cout<<*it<<" ";
    //  }

    // iterating implicitly

    for(auto num:v1)
        cout<<num<<" ";

    return 0;
}