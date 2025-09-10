// LIFO
// LAST IN FIRST-OUT -> Principle

// Complexity-wise All the operations push,pop,top are O(1)constant time.

#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    stack<int>st;

    st.push(6); //{6}
    st.push(7); //{6,7}
    st.emplace(9); //{6,7,9}

    st.top() += 5; // {6,7,14}
    cout << st.top() <<endl; // 14
    st.pop(); // {6,7}
    cout << st.top() <<endl; // 7

    cout << st.size() << endl;
    cout << st.empty();

    stack<int>st1;
    st.swap(st1);
}

int main(){
    explainStack();
}