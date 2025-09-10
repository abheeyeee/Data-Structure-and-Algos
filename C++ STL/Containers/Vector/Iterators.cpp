//Iterators , auto , for each loop;

#include<bits/stdc++.h>
using namespace std;

int main (){
    
//Iterators in Vectors.
//Iterators points to the memory where the element is stored.

//begin()    
    vector<int> z = {1,2,3,4,5};
    vector<int>::iterator it = z.begin();
    it++;
    cout << *it << " "; //Dereferencing Using '*'. *it accesses the value stored at that memory address.

    it = it + 2;
    cout << *it << " ";
    cout << endl;

//end()
    vector<int>::iterator it1 = z.end(); //points past the last element
    --it1;    // move back to last element
    cout << *it1<< endl;// now you get the last element

//rend()
    vector<int>::reverse_iterator it2 = z.rend();
    --it2;
    cout << *it2 << endl;

//rbegin()
    vector<int>::reverse_iterator it3 = z.rbegin();
    cout << *it3 << " ";
    it3++;
    cout << *it3 << endl;

//back()
    cout << z[0] << " " << z.at(0) << endl;
    cout << z.back() << " " << endl;

//Iterator wise printing cout
    for(vector<int>::iterator it = z.begin(); it !=z.end(); it++){
        cout <<*it <<" ";
    }
    cout << endl;

//auto 
    for(auto it = z.begin(); it != z.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

//For each loop
    for(auto x : z){
        cout << x <<" ";
    }
    cout << endl;

}