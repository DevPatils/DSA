#include<iostream>
using namespace std;

int print_arr(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int num[] ={1,2,3}; 
    reverse(num,3);
    print_arr(num,3);  
}