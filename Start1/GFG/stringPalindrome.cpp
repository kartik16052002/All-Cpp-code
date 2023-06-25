#include<bits/stdc++.h>
using namespace std;

// string nextLargestPalindrome(string s, int length){
// 	// Write your code here.
//     int x = stoi(s);
//     bool flag = true;
//     while(true){
//         x++; flag = true;
//         string str = to_string(x);
//         length = str.length();
//         cout<<str<<"\n";
//         for(int i =0; i<length/2; i++){
//             if(str[i] != str[length-1-i]){
//                 flag = false;
//                 break;
//             }
//         }

//         if(flag) return str;
//     }
// }

string nextLargestPalindrome(string s, int length){
	// Write your code here.
    while(true){
        int j =1;
        // this while loop and next if else will increase its value by 1;
        while(s[length-j] == '9'){
            s[length-j]='0';
            j++;
            if(j == length+1) break; 
        }

        if(j == length+1){
            s = '1' + s;
        }else{
            char c = s[length-j];
            c++;
            s[length-j] = c;
        }

        // now checking for palindrome
        length = s.length();
        bool flag = true;
        for(int i=0;i<length/2;i++){
            if(s[i] != s[length-1-i]){
                flag = false;
                break;
            }
        }
        if (flag) return s;


    }
    
}

int main(){
    string num = "655301402558414";
    cout<<"Answer is: "<<nextLargestPalindrome(num,16);
 return 0;
}