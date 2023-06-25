#include<bits/stdc++.h>

using namespace std;

int main(){

    // *****Stack******

    // all the operations are in constant time

    // stack<int>st;

    // st.push(5);
    // st.push(6);
    // st.emplace(8);

    // cout<<st.top()<<" ";

    // st.pop();
    // cout<<st.top()<<" ";

    // stack<int>st1,st2;

    // st1.swap(st2); 


    // ****queue****


    // all the operations are in constant time

    // queue<int> q;

    // q.push(2);
    // q.push(8);
    // q.push(16);
    // q.emplace(20);
    
    // q.back() += 5; // 20+5

    // cout<<q.back()<<" "; // prints 25

    // cout<<q.front()<<" "; // prints 2

    // q.pop();
    //     cout<<q.front()<<" "; // prints 8


    // ******priority queue*********


    // based on tree data structure

    // priority_queue<int> pq; // works like stack where the top element is the highest one
    // max heap
    // pq.push(5);
    // pq.push(2);
    // pq.push(8);
    // pq.push(3);
    // pq.emplace(2);

    // cout<<pq.top()<<" ";
    // pq.pop();
    // cout<<pq.top()<<" ";

    
    // *******min heap********


    // priority_queue<int, vector<int>, greater<int>> mpq;
    // mpq.push(5);
    // mpq.push(2);
    // mpq.push(8);
    // mpq.push(3);
    // mpq.emplace(2);

    // cout<<mpq.top()<<" ";
    // mpq.pop();
    // cout<<mpq.top()<<" ";

    // push pop -> log n and top -> O(1)






    // ********Set**********


    // no repitations
    // ordered fashion, insertion-deletion takes log N
    // set<int> s;
    // s.insert(5);
    // s.emplace(2);
    // s.insert(18);
    // s.insert(6);
    // s.insert(8);
    // s.insert(9);
    // s.insert(5);
    // auto it = s.begin();
    // int c = *it;
    // cout<<c;

    

    // auto it = s.find(8); // returns an iterator pointing to 8
    // auto et = s.find(7); // 7 is not there therfore return s.end();

    // s.erase(5); // erase 5 in logarthmic time
    // s.erase(it);

    // auto it1 = s.find(2);
    // auto it2 = s.find(6);
    // s.erase(it1,it2); // will not erase 6

    // int cnt = s.count(9); // return 1 if it is there  and 0 if not , no other value
    
    // auto it = s.lower_bound(2);
    // auto it = s.upper_bound(2);



    // *******MultiSet*********** -> stores multiple occurences***********


    // multiset<int> ms;
    // ms.emplace(5);
    // ms.insert(8);
    // ms.insert(2);
    // ms.insert(1);
    // ms.insert(8);
    // ms.insert(2);
    // ms.insert(2);
    // ms.insert(2);

    // ms.erase(8); // all 8's are deleted

    // ms.erase(ms.find(2)); // only one 2 is delted because it returns a iterator

    // ms.erase(ms.find(2), ms.find(2) + 2);


    // **********unoredered set***********


    // store unique elements, doesn't repeats, unordered fashion

    // //unordered_set<int> us;
    // most functins in O(1) but in rare case O(n)


    // *********Map**********


    // unique keys and may contain duplicate value
    // arrange -> sorted value of key

    // map<int, int> mp;

    // // map<int, pair<int,int>> mp1;
    // // map<pair<int,int>,int> mp2;

    // mp[1] = 2; // here key is 1 and value is 2
    // mp.emplace(3,5);
    // mp.insert(2,8);

    // for(auto it : mp){
    //     cout<<it.first<<" "<<it.second;
    // }

    // cout<<mp[1]<<" "; // prints 2
    // cout<<mp[5]<<" "; // returns null prints 0

    // auto ip = mp.find(3); // points to key 3
    // cout <<(*ip).second;

    // auto it = mp.find(5); // if not present points after the map

    // lower_bound upper_bound present
    // erase, swipe, empty, swap are same


    // multimap
    // duplicate key, arranged in sorted way

    // unordered map
    // no duplicate keys, arranged in unsorted way

    // map -> log n
    // unordered_map -> O(1) very rare O(n) 
    return 0;
}