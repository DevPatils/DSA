#include <iostream>
using namespace std ;

int left_occur(int arr[],int size , int key){
    int start = 0;
    int end = size;
    int mid  =  start +(end-start)/2;
    int ans  ;

    while(start<=end){
        if (arr[mid]==key){
            ans = mid ;
            end= mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid  =  start +(end-start)/2;

    }
    return ans;
}

int right_occur(int arr[],int size , int key){
    int start = 0;
    int end = size;
    int mid  =  start +(end-start)/2;
    int ans  ;

    while(start<=end){
        if (arr[mid]==key){
            ans = mid ;
            start= mid+1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid  =  start +(end-start)/2;

    }
    return ans;
}

int main(){
    int arr[6] = {1,2,3,3,3,5};
    int left = left_occur(arr,6,3) ;
    int right =right_occur(arr,6,3); 
    int ans = right -left +1;
    cout<<"Total occurences of 3 are "<<ans;
}