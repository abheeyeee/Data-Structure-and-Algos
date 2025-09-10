#include<bits/stdc++.h>
using namespace std;

//Pairs

//Pair is a utility
//You can think of pair as part of the C++ Standard Library utilities.
void explainPair(){

    //Simple pair
    pair<int, int> a = {1,4};
    cout << a.first<< " "; //Prints 1
    cout << a.second<<endl; //Prints 4

    //Nested pair
    pair <int, pair<int, int>> p = {1,{2,3}};
    cout<< p.first<<" "; //Prints 1
    cout<< p.second.first<<" "; //Prints 2
    cout<< p.second.second<<endl; //Prints 3
    
    //Array of pairs
    pair<int, int> arr[]= {{1,2},{2,5},{5,1},{6,7}};
    cout << arr[0].first<<" "; //prints 1
    cout << arr[1].second<<" "; //prints 5
    cout << arr[2].first<<endl; //prints 5

}
int main(){
    explainPair();

    return 0;
}
