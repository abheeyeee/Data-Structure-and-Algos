#include<bits/stdc++.h>
using namespace std;

void explainMultiSet(){
    // Everything is same as set, it is sorted but not unique.
    // Only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's are erased

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // only a single 1 is erased

    ms.erase(ms.find(1),next(ms.find(1), 3)); // → removes exactly 3 elements starting at the first 1.

    // Rest all functions are same as set
}

int main(){
    explainMultiSet();
}