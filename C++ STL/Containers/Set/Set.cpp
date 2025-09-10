#include<bits/stdc++.h>
using namespace std;

// Set stores UNIQUE ELEMENTS in a SORTED ORDER (by default, ascending). 
/* 
    No duplicates: Each element can appear only once.
    Automatic sorting: Elements are always kept sorted.
    Underlying structure: Usually implemented as a balanced binary search tree (like Red-Black Tree).
*/

void explainSet(){
    // Use set when you need a collection of unique, sorted elements with efficient search, insert, and delete operations.
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.emplace(3); //{1,2,3,4}

    /* Functionality of insert in vector
        can be used also, that only increases
        efficiency
    */
    for(int x : st){
        cout << x <<" "; // Output 1 2 3 4 
    }
    cout << endl;    
    // begin(), end(), rbegin(),rend(), size(),
    //empty() and swap() are same as those of others

    // {1,2,3,4}
    auto it = st.find(4); 
}

int main(){
    explainSet();
}