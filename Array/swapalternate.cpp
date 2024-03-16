#include<iostream>
using namespace std;

int print_arr(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void alternate_swap(int arr[],int n ){
    int start = 0;
    int end = 1;
    while(end<=n-1){
        swap(arr[start],arr[end]);
        start=start+2;
        end = end+2;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    alternate_swap(arr,8);
    print_arr(arr,8);
}