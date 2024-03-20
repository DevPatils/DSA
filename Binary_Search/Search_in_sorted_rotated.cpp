#include <iostream>
using namespace std;

int get_pivot(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else {
            end = mid;

        }
        mid = start+(end-start)/2;
    }
    return start;
}

int Binary_search(int arr[],int s , int e, int key ){
    int start = s;
    int end = e;
    int mid = start +(end-start)/2;

    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    return -1;
}

int find_position(int arr[],int n,int key){
    int p = get_pivot(arr,5);
    if (key>=arr[p]&& key<=arr[n-1]){
        return Binary_search(arr, p, n-1,key);
    }
    else{
        return Binary_search(arr,0,p-1,key);
    }
}

int main(){
    int arr[7] ={4,5,6,7,0,1,2};
    int x = find_position(arr,7,0);
    cout<<x;
    

}