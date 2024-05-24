#include<iostream>
using namespace std ; 

int only_once(int arr[],int n){
    int XOR = arr[0];
    for(int i = 1;i<n;i++){
        XOR ^= arr[i]; 
    }
    return XOR;
}

int main(){
    int arr[5] = {1,1,2,3,3};
    int x = only_once(arr,5);
    cout<<x;
}