#include <iostream>
using namespace std ;

int selection_sort(int arr[] , int n){
    // int temp = arr[i];
    for(int i = 0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}

int bubble_sort(int arr[],int n){
    for(int i =0;i<n;i++){
        bool isSwapped = false;
        for(int j = 0;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                isSwapped= true;
            }
        }
        if(isSwapped==false){
            break;
        }
    }
}

int insertion_sort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
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
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6] ={1,6,4,32,5,3};
    insertion_sort(arr,6);
    print_arr(arr,6);


}