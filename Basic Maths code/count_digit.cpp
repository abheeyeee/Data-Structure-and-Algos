#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt = (int)(log10(n) + 1); // cnt = 4 for n = 1234
    return cnt;

}
int main(){
    cout << count(123456789) << endl;
    return 0;
}