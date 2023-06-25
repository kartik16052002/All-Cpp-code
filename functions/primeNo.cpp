#include <iostream>
#include<math.h>
using namespace std;
void primeNo(int n, int m){
    for(int i=n;i<=m;i++){
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0)
            break;
            if(j=sqrt(i))
            cout<<i<<" ";
        }
    }
}
int main() {

   int m,n;
   cin>>m; cin>>n;
   primeNo(m,n);

   return 0;
}