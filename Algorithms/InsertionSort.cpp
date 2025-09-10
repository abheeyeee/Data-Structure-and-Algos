#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 6;
    int arr[n]={29,34,23,31,42,12};
    int temp;
    for(int i=1;i<n;i++){
         temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}