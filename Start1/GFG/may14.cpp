#include<bits/stdc++.h>


using namespace std;
class Solution {

  public:
    long long findMaxSubsetSum(int N, vector<int> &A) {
        // code here
        int i=0,j=1,sum=0;// there are at least two elements in the array
        while(j<N){
            if(A[i]>0 && A[j]>0){ // if both are +ve we will add them and move the each pointer by 2
                if(j == N-2){ // now if we move the pointer by 2 the j will be out of index
                    sum+=A[i]; sum+=A[j];
                    if(A[j+1]>0) sum+= A[j+1]; // taking only if it is +ve
                    return sum;
                }

                sum+=A[i]; sum+=A[j];
                i+=2; j+=2;
            }
            else if(A[i]>=A[j]){
                sum+=A[i];
                i++;j++;// noving only by one because A[j] still needed to be considered
            }else{
                if(j == N-2){
                    sum+=A[j];
                    if(A[j+1]>0) sum+=A[j+1];
                    return sum;
                }

                sum+=A[j];
                i+=2;j+=2; // As we know both of them are not +ve, moving pointer by 2 because if we don't
                // the A[j] will be considered twice.
            }
        }
        return sum;
    }
};


int main(){
    


 return 0;
}