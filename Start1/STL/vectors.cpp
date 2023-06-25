#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // faster than push_back

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,100); // 5-> Size, 100-> all elemants

    vector<int> v2(10); // doesn't initializes and size is 10

    // iterators

    vector<int>::iterator it = v.begin();

    // other iterators are v.end() v.rbegin() v.rend()

    // for(vector<int>::iterator it = v.begin(); it != v.end();it++){
    //     cout<<*(it)<<" ";
    // }

    // or

    // for(auto it = v.begin(); it!= v.end();it++){
    //     cout<<*(it)<<" ";
    // }

    // or

    // for(auto it: v){
    //     cout<< it << " ";
    // }

    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    cout<<"\n New \n";
    for(auto pt: v){
        cout<<pt<<" ";
    }
    cout<<"\nAfter Erase operation\n";
    // v.erase(v.begin() + 1); // will delete and reshuffle(after deletion moving ahead of elements) the array
    cout<<"\n";
    v.erase(v.begin()+1,v.begin() + 3); // delete till v.begin()+ 2
    for(auto pt: v){
        cout<<pt<<" ";
    }

    // insertion function
    cout<<"Hello\n";
    vector<int> vc(2,100); // 100, 100
    vc.insert(vc.begin(),300); // 300 100 100
    vc.insert(vc.begin()+1,2,10); // 300 10 10 100 100

    cout<<"Insertion operation:\n";

    for(auto it: vc){
        cout<<it<<" ";
    }
    cout<<"\n";

    vector<int> copy(5,50);
    for(auto pt: copy){
        cout<<pt<<" ";
    }
    cout<<"\n";
    cout<<"Next Insertion\n";
    vc.insert(vc.begin(), copy.begin(), copy.end()); //50 50 ... 300 ...// copy.end() denotes after address
    for(auto pt: vc){
        cout<<pt<<" ";
    }
    cout<<"\n";

    // other function 

    // v.size(); v.pop_back(); v.swap(v2); v.clear(); v.empty();

    


    return 0;
}