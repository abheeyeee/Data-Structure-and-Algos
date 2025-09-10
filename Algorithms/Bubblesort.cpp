#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={64,25,12,22,11};
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
            //    swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}