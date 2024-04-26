#include <iostream>
using namespace std;

int rotate_by1(int arr[], int n ){
    int temp = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1] = temp;
}
int printarr(int arr[],int n ){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


//Brute
void rotate_by_d(int arr[] , int n,int d){
    d= d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i = d;i<n;i++){
        arr[i-d] = arr[i];
    }
    
    // int j = 0;
    for(int i =n-d;i<n;i++){
        // arr[i] = temp[j];
        arr[i] = arr[i-(n-d)]; //Optimal 
        // j++;
    }
}


//Optimal
int RotateKtimes(int arr[],int n,int k){
    int rotate = k%n;
    int temp[rotate];
    // int size = sizeof(temp);
    // cout<<size;
    for(int i = 0 ;i<rotate;i++){
        temp[i]=arr[n-i-1];
    }
    for(int i =0;i<=rotate-1;i++){
        arr[i+rotate]=arr[i];
    }
    for(int i = 0;i<rotate;i++){
        arr[i]=temp[rotate-i-1];
    }
    // printarr(arr,5);
    // printarr(temp,rotate);
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    // rotate_by1(arr,5);
    RotateKtimes(arr,6,3);
    printarr(arr,6);
}