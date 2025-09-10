// List is also Dynamic in Nature

#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> ls;
    
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(69); // {69,2,4}
    ls.emplace_front(29); // {29,69,2,4}

    ls.pop_back(); // removes 4
    ls.pop_front(); // removes 29
    
    for(auto x : ls){
        cout << x <<" ";
    }


    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main (){
    explainList();
}