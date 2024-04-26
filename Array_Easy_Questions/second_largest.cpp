#include <iostream>
using namespace std;

int find_largest(int arr[],int n){
    int large = arr[0];
    for(int i =1;i<n;i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    return large;
}
int find_secondlargest(int arr[],int n){
    int large = find_largest(arr,n);
    int second_largest = -1;
    for(int i =0;i<n;i++){
        if(arr[i]>second_largest && arr[i]!=large){
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int second_largestOptimization(int arr[],int n ){
    int largest = arr[0];
    int second_largest = INT16_MIN;
    for(int i =1 ; i<n;i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second_largest){
            second_largest = arr[i];
        }
    } 
    return second_largest;
}

int main (){
    int arr[5] = {6,2,4,1,7};
    int second = second_largestOptimization(arr,5);
    cout<<second;
}