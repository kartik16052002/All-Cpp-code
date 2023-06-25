#include<bits/stdc++.h>

using namespace std;

int basicRecursion(int n){
    cout<<n<<" "; // works when recursion functions are calling itself
    n--;
    if(n==0) return 0;
    int c = basicRecursion(n);// the code below this works while returning phase and the code above this works when recursion functions are calling itself
    // therfore the base condition is above the recursive call
    if(c == 0) cout<<"\nReturn phase started\n";
    cout<<"\nThe value of c is:"<<c<<"\n";
    cout<<n<<" "; // works during return phase of recusion
    return c+5; // not updating value of c but u will see increase in value due to recursion
    // observe why 0 is not printed and 5 is not printed at last
    // while returning the value of n stored in the Stack matters in the above code becuase the
    // function which is returned, the code has no info about it
    // when the 4 is printed while returning the fuction gets ended and its value is returned to the main
}

// It will print 5 and then the value of n is reduced. Now you may be aware about the
// concept of Stack. If a new function is called, it will be given a new stack frame.
// Now let the name of initial stack is Stack1. As the value of n is reduced to 4,therfore
// when the function calls itself (basicRecursion) it will pass the value of n as 4.
// Now a new stack frame is added and the value of n is reduced and it is equl to 3. Let the 
// name of the stack is Stack2 and now the value of n in Stack2 is 3. Remember thet the value
// of n in Stack1 is 4(because it get reduced from 5 to 4). Now as the value of n in Stack2 is
// 3, the function now will pass the value as 3. It wil go on until it reaches 0. If it reaches
// 0, the function will return the value 0 and it is deallocated from stack frame.

// You can observe that in
//     Stack1   Value of n = 4
//     Stack2   Value of n = 3
//     Stack3   Value of n = 2
//     Stack4   Value of n = 1
//     Stack5   Value of n = 0

// Now we can see that the function which is in Stack5 returned the value 0
// (See in the code if condition)
// (Observe that till now the print is 5 4 3 2 1)
// The value returned is stored in c which is in Stack 4.
// Now there will be a print of 1 again because the value of n in Stack 4 is 1.
// Now the function will retuen the value c+5 = 0+5 = 5 which is stored in c which is in 
// stack Stack 3. Now there will be a print of 2 and then functions return the value c+5 = 
// 5+5 = 10 and then it is stored in c which is in Stack2. And the process repeats.

// Observe that in whole process the value of n printed is:
// 5 4 3 2 1 1 2 3 4
// Observe that at last 5 is not printed

// This article is written for you to give a feel about recursion, while in problem solving
// you not need to think that much.

// Here the line in the code if(n ==0) return is called the base condition for recursion.

// By the help of recursion you can break a big problem into smaller part and then you can
// solve it. By practising problem you will learn more about how to apply recursion in a given
// problem statement.


int main(){
    
    basicRecursion(5);
    return 0;
}