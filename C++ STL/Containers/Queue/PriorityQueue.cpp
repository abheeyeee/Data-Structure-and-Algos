#include<bits/stdc++.h>
using namespace std;

// The order inside a priority queue is not like a vector or list.
// Only top() is guaranteed to be the largest (max-heap) or smallest (min-heap) element.

// Internally, it uses a binary heap (usually a max-heap/Min-heap) data structure, which efficiently maintains the largest/smallest element at the root after every insertion or removal.
// maximum element is always at the top (for the default max-heap).

// Time Complexities of Operations happens in :
// Push -> log(n)
// Top -> O(1)
// Pop -> log(n)

void explainPQ(){
    // Maximum-heap (default)
    priority_queue<int>pq;  
    pq.push(5); // {5} pushes 5, top is 5
    pq.push(2); // {2,5} pushes 2, top is 5
    pq.emplace(10); // {2,5,10} pushes 10, top is 10
    pq.emplace(8); // {2,5,8,10} pushes 8, top is 10

    cout << pq.top() << endl; // prints 10

    pq.pop(); // {2,5,8}

    cout << pq.top() << endl; // prints 8

    //size swap empty function are same as others 


    // Minimum-heap
    priority_queue<int, vector<int>, greater<int>> min_pq;   
    min_pq.push(5); // {5}
    min_pq.push(2); // {2,5}
    min_pq.push(8); // {2,5,8}
    min_pq.emplace(10); // {2,5,8,10}

    cout << min_pq.top(); // prints 2
    
}

int main(){
    explainPQ();
}