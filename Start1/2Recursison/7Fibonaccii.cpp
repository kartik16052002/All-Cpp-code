#include<bits/stdc++.h>

using namespace std;
// using namespace std::chrono;
int fibo(int n){
    if(n==1) return 1;
    if(n==0) return 0;

    return fibo(n-1) + fibo(n-2);
}

int main(){
    // auto start = high_resolution_clock::now();
    cout<<fibo(30)<<" ";
    cout << "\n";

// auto stop = high_resolution_clock::now();

// auto duration = duration_cast<microseconds>(stop - start);

// cout << "Time taken by function: "

// << duration.count() << " microseconds" << "\n";

    return 0;
}