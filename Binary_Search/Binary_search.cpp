#include <iostream>
using namespace std ;

int binary_search(int arr[] , int size , int key){
    int start = 0;
    int end = size;
    int mid = start +(end-start)/2; // Optimisation 

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if (key>arr[mid]){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start +(end-start)/2;

    }
}

int main(){
    int arr_even [6]={1,2,3,4,5,6};
    int arr_odd [7]={1,2,3,4,5,6,7};
    int odd_index = binary_search(arr_odd,7,6);
    int even_index = binary_search(arr_odd,7,5);

    cout<<"The index of 6 is "<<odd_index;
    cout<<endl;
    cout<<"The index of 5 is "<<even_index;
}