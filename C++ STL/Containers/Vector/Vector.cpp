#include<bits/stdc++.h>
using namespace std;

// Vector

// Vector is a Sequence Container which is dynamic in nature.
// It provides dynamic array functionality in C++.

void explainVector(){

    //Simple vector of integers.
    vector<int> v;
    v.push_back(6);
    v.emplace_back(9); //It does in-place object creation and more efficient than pusback.
    for(int x: v){
        cout << x<<" "; //Prints 6 9.
    }
    cout <<endl;
    
    
    //Vector of pairs of integers.
    vector<pair<int, int>> vec;
    vec.push_back({2,3});
    vec.emplace_back(1,2);
    vec.emplace_back(8,6);
    for(auto x: vec){
        cout << x.first<<" "<<x.second<<endl; //Prints 2 3, 6 9.
    }


    vector<int> a(5,69); //Sized + Value-initialized Vector.This is a pre-initialized vector.Size = 5, Every element = 69
    for(auto x: a){
        cout<< x << " ";
    }
    cout <<endl;

    vector<int> b(5); //Vector of size 5;

    vector<int> v1(5,20); // {20,20,20,20,20}.
    vector<int> v2(v1); //Copy constructor of vector.   
    for(auto x: v2){  //Creates a new vector (v2) as an exact copy of v1. 
        cout << x<<" "; // Same output as v1, {20,20,20,20,20}.
    }
    cout <<endl;
}


int main(){
    explainVector();

    return 0;
}
 