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
    st.insert(5); //{1,2,3,4,5}
    st.insert(6); //{1,2,3,4,5,6}
    st.emplace(7); //{1,2,3,4,5,6,7}

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
    auto it = st.find(4); // returns an Iterator which points to the 4
    auto it = st.find(12); // if an element is not in the SET it will always return set.end(), which means an iterator which points to the next after the end.
    
    st.erase(4); // erases 4, takes logarithmic time

    int cnt = st.count(2); // as it contains only unique elements, it will only have either 1 or 0 occurence of any element when counted.
    
    auto it = st.find(3);
    st.erase(it); // it takes constant time

    auto it1 = st.find(2);
    auto it2 = st.find(5);

    st.erase(it1, it2); // after erase, {1,5,6,7} [first,last)

    // lower_bound() and upper_bound fucntion works in the same way
    // as in vector it does.
    /*
        lower_bound(x)

            Returns an iterator to the first element that is not less than x (≥ x).
            If x is present, it points directly to x.
            If x is not present, it points to the next greater element.
            If all elements are smaller than x, it returns st.end().

        upper_bound(x)

            Returns an iterator to the first element strictly greater than x (> x).
            If x is present, it skips it and points to the next element.
            If no element is greater than x, it returns st.end().
    */

    // This is the syntax 
    auto it = st.lower_bound(2); // → points to 2 // Returns an iterator to the first element that is not less than x (≥ x).
    auto it = st.upper_bound(2); // → points to 3
    auto it = st.upper_bound(3); // → points to 4  // Returns an iterator to the first element strictly greater than x (> x).

    // st.lower_bound(10) → st.end() (since 10 is not there, and no element ≥ 10)
    // st.upper_bound(7) → st.end() (since no element > 7)
}

int main(){
    explainSet();
}