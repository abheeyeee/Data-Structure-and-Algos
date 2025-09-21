#include<bits/stdc++.h>
using namespace std;

// Map store unique KEYS in sorted order

void explainMap(){
    map<int, int> mpp; // key is 1 int and value is 1 int

    map<int, pair<int, int>> mpp1; // key is 1 int and value is 2 int, pair<int, int>

    map<pair <int, int>, int> mpp2; // key is 2 int, pair<int, int> and value is 1 int

    mpp[1] = 2; //  key is 1 and the value its storing is 2
    mpp.emplace(3,1); // key is 3 and the value its storing is 1
    mpp.insert({2,4}); // key is 2 and the value its storing is 4

    mpp2[{2, 3}] = 10; // Key: {2, 3}, Value: 10

    for (auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[5] << endl;

    auto it = mpp.find(3);
    cout << (it)->second << endl;

    auto it2 = mpp.find(5); // it points to mpp.end(), which is after the last element.

    auto it3 = mpp.lower_bound(2);
    auto it4 = mpp.upper_bound(3);

    // erase, swap, size, empty, are same as above
}  


int main(){
    explainMap();
}