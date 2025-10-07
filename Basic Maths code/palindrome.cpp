#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int reverse(int x) {
    int temp =  x;
    int rev = 0;
    while(x!=0){
        int last = x % 10;
        if((rev > INT_MAX/10)|| (rev < INT_MIN/10)) return 0;
        rev = rev * 10 + last;
        x/=10;
    }
    return rev;
}
bool isPalindrome(int x) {
        if (x < 0) return false;
        return (x == reverse(x));

    }
};