#include <iostream>
using namespace std;

int Mountain_peak(int arr[],int size ){
    int start = 0;
    int end = size;
    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return mid;

}

int main(){
   int arr[] = {3,4,5,1};
   int ans = Mountain_peak(arr,3);
   cout<<"The peak is at index "<<ans;
}