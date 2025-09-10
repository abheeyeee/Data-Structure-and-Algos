// FIFO
// FIRST IN FIRST-OUT

// All the operations are happening in O(1)constant time.


#include<bits/stdc++.h>
using namespace std;


void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}
    
    q.back() += 5;
    q.front() += 3;
    cout << q.back() << endl; // prints 9
    cout << q.front() << endl; // prints 4

    q.pop(); // {2,9}

    cout << q.front(); // prints 2

    //size, swap, empty same as stack
}

int main() {
    explainQueue();
}
