#include<iostream>
#include<stdio.h>
using namespace std;

template <typename X>

class Array{
    private:
        X *ptr;
        int size;
        int lastIndex;
    public:

        Array(){
            ptr = NULL;
            size = 0;
            lastIndex = -1;
        }

        void createArray(int s){
            ptr = new X[s];
            size = s;
            
        }

        void insert(int ind, X data){
            if(ind<0 || ind>lastIndex+1)
                cout<<"Invaild Index";
            else if(lastIndex == size-1)
                cout<<"Array is full";
            else{
                int i;
                for(i = lastIndex;i>=ind;i--)
                    ptr[i+1] = ptr[i];

                ptr[ind] = data;
                lastIndex++;
            }
        }

        void viewArray(){
            for(int i = 0;i<=lastIndex;i++){
                cout<<ptr[i]<<" ";
            }
        }

};

int main(){
    Array <int>arr1;
    arr1.createArray(5);
    arr1.insert(0,10);
    arr1.insert(1,20);
    arr1.insert(0,30);
    
    arr1.viewArray();

    return 0;
}