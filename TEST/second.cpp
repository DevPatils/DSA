#include <iostream>
using namespace std ; 

int find_greatest(int arr[] , int  n){
    int large = arr[0];
    for(int i = 0 ;i<n;i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    return large;
}
int find_smallest(int arr[] , int  n){
    int smallest = arr[0];
    for(int i = 0 ;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int find_second_largest(int arr[],int n ){
    int max = find_greatest(arr,n);
    int second = INT16_MIN;
    for(int i = 0 ;i<n;i++){
        if(arr[i]>second && arr[i]!=max){
            second = arr[i];
        }
    }
    cout<<second;
    return second;
}
int find_second_smallest(int arr[],int n ){
    int min = find_smallest(arr,n);
    int second = INT16_MAX;
    for(int i = 0 ;i<n;i++){
        if(arr[i]<second && arr[i]!=min){
            second = arr[i];
        }
    }
    cout<<second;
    return second;
}
int main(){
    int arr[4]= {1,2,3,4};
    // int x = find_smallest(arr,4);
    // cout<<x;
    find_second_largest(arr,4);
    // find_second_smallest(arr,4);    



}