#include<iostream>
using namespace std ;

int rotate_by_one(int arr[],int n){
    int temp = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1] =arr[i];

    }
    arr[n-1] = temp;
}

int print_arr(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    rotate_by_one(arr,5);
    print_arr(arr,5);
    // print_arr(arr,5);



}