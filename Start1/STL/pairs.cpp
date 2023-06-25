#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int, int> p1 = {5,6};// pair lies inside utility libraray
    cout<<p1.first<<"\n";

    pair<int, pair<int, int>> p2 {1,{5,8}};
    cout<<p2.second.second<<"\n";

    pair<int, int> parr[] = {{1,2}, {3,4},{5,6}};
    cout<<parr[1].second<<"\n";
    return 0;
}