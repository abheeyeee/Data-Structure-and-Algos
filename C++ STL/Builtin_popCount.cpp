#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 7;
    int cnt = __builtin_popcount(num);  // counts 1s in binary of 7 → 111 → 3

    long long num2 = 214325467545234;
    int cnt1 = __builtin_popcountll(num2); // counts 1s in binary of num2 → 27

    cout << cnt << endl;   // 3
    cout << cnt1 << endl;  // 27
}
