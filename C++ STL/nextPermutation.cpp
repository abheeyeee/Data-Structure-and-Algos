#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "1234";
    // if s was unsorted s = 2341
    sort(s.begin(), s.end());
    int count = 0;
    do{
        cout << s << endl;
        count ++;
    }while(next_permutation(s.begin(),s.end()));
    cout << count << endl;

    return 0;
}