#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct starter{
    string name;
    int price;
    double time;

    starter(string n, int p, double t){
        name = n;
        price = p;
        time = t;
    }
};
int main(){
    starter *s1 = new starter("kartik",50,12.56);
    return 0;
}