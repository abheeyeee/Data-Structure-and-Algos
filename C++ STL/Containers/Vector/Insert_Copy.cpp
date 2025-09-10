// Insert Function

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(2,100); // 100 100
    v.insert(v.begin(),300); // 300 100 100
    v.insert(v.begin()+1,3,69); // 300 69 69 69 100 100
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
    
//Insert a vector into an another vector
    vector<int> copy(2,80); // 80 80
    v.insert(v.begin(),copy.begin(),copy.end()); // 80 80 300 69 69 69 100 100
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;

    cout <<v.size()<<endl;
    v.pop_back(); //pops out the last element

//swap
    vector<int>v1={1,2,3};
    vector<int>v2={9,8,7};
    v1.swap(v2);
    for(auto x : v1){
        cout << x << " "; // 9 8 7
    }
    cout << endl;

    v.clear(); //erases the entire vector.  
    cout << v.size()<< endl;
    cout << v.empty(); // Output 1 bcz .empty() is a boolean function.
}
