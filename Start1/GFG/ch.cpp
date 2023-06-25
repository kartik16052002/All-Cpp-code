#include <iostream>
using namespace std;

string nextLargestPalindrome(string s, int length) {
    int mid = length / 2;
    int left = mid - 1;
    int right = (length % 2 == 0) ? mid : mid + 1;

    // Check if the number needs to be incremented
    while (left >= 0 && s[left] == s[right]) {
        left--;
        right++;
    }

    bool incrementNeeded = false;
    
    // Check if the left part is smaller than the right part
    if (left < 0 || s[left] < s[right]) {
        incrementNeeded = true;
    }

    // Increment the number and mirror the left half to the right half
    while (left >= 0) {
        s[right] = s[left];
        left--;
        right++;
    }

    // Increment the number and mirror the left half to the right half
    if (incrementNeeded) {
        int carry = 1;
        left = mid - 1;

        if (length % 2 == 1) {
            int digit = s[mid] - '0' + carry;
            s[mid] = digit % 10 + '0';
            carry = digit / 10;
            right = mid + 1;
        } else {
            right = mid;
        }

        while (left >= 0) {
            int digit = s[left] - '0' + carry;
            s[left] = digit % 10 + '0';
            carry = digit / 10;
            s[right] = s[left];
            left--;
            right++;
        }
    }

    return s;
}

int main() {
    string input;
    cout << "Enter a number: ";
    cin >> input;
    int length = input.length();

    string result = nextLargestPalindrome(input, length);
    cout << "Next largest palindrome: " << result << endl;

    return 0;
}
