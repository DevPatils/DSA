#include <iostream>
using namespace std;

int first_occur(int arr[],int size, int key){
    int start = 0;
    int end = size;
    int mid = start+(end-start)/2;
    int ans ;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid ;
            end = mid -1;
        }
        else if(key<arr[mid]){
            end = mid -1;
        }
        else if(key>arr[mid]){
            start = start +1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int last_occur(int arr[],int size, int key){
    int start = 0;
    int end = size;
    int mid = start+(end-start)/2;
    int ans ;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid ;
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid -1;
        }
        else if(key>arr[mid]){
            start = start +1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main (){
    int arr[7] = {1,2,3,3,3,3,5};
    int first = first_occur(arr,7,3);
    int last = last_occur(arr,7,3);
    cout<<"The first occurence of 3 is "<<first<<" The last occurence is "<<last;
}