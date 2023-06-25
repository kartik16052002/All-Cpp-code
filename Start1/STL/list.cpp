#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(5);

    ls.push_front(8);
    ls.emplace_front(9);

    // rest functions are same as vector
    
}