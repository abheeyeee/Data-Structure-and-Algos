#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6};

    v.erase(v.begin() + 1); // Deletes element at index 1 (value 2)
    for(auto a : v) {
        cout << a << " "; // Output: 1 3 4 5 6
    }
    cout << endl;

    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    v1.push_back(11); // Adds 11 at the end

    // Vector properties:
    cout << v1.size() << " " << v1.capacity() << endl; 
    // size()     -> number of elements currently in vector (here: 11)
    // capacity() -> total elements vector can hold without reallocating memory (implementation dependent, e.g., 16)
    //When you do v.push_back(x) and size() == capacity(), the vector needs more memory.
    //double the capacity when resizing.



    // Erase elements from index 2 to index 6 (3,4,5,6,7)
    v1.erase(v1.begin() + 2, v1.begin() + 7); 
    for(auto a : v1) {
        cout << a << " "; // Output: 1 2 8 9 10
    }
    cout << endl;
}
