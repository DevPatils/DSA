#include <iostream>
using namespace std;

int get_pivot(int arr[],int n ){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<end){
        // if(arr[mid]<=arr[0]){
        //     start = mid;
        // }
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    cout<<end;
}

int main(){
    int arr[6] = {7,9,1,2,3};
    get_pivot(arr,6);
}