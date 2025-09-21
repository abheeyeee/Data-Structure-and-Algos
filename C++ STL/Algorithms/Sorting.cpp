#include <bits/stdc++.h>
using namespace std;

// Comparator function
bool comparator(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second) {
        return true;
    }else if(p1.second == p2.second){
        if(p1.first > p2.first) return true;
    }
    return false;
}



void explainSort(){
    sort(a, a+n); //a is the first element in the array and n is size of the array. a + n here points to the .end(), which is after the last element.
    sort(v.begin(), v.end()); // if you are using vector.

    sort(a+2, a+4); // sorts the subarray a[2] and a[3] (since end index 4 is exclusive).
    sort(a, a+n, greater<int>()); // sorts in descending order, greater<int>() is a comparator.

    pair<int, int> a[]= {{1,2}, {2,1}, {4,1}};
    // sort it according to increasing second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a, a+n,comparator); // comparator is a user-defined function boolena function.
    // {{4,1}, {2,1}, {1,2}};
    


}

int main(){
    explainSort();
}
