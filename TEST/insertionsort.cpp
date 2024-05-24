#include <iostream>
using namespace std ;

int insertion_sort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int temp = arr[i];
        int j =i-1;
        for(j;j>=0;j--){
            if(arr[j]>temp){
            swap(arr[j+1],arr[j]);
        }
        else{
            break;
        }
        }
    }
}

int print_arr(int arr[],int n){
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[6]={4,2,1,6,7};
    insertion_sort(arr,6);
    print_arr(arr,6);

}