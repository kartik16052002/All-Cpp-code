#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
	  cin>>t;
	   while(t--){
	        int x,y;
	         cin>>x>>y;
	         int s=0;
	         int q = x;
	         while(x<y){
	             s++;
	             x += q;
	         }
	        cout<<s;
	    
	    
	   }
	return 0;
}