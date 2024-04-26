#include<iostream>
using namespace std;

int Selection_Sort(int arr[], int n){
   
    for(int i = 0 ; i<=n-1 ;i++){
        int min_ind = i;
        for(int j = i ; j<=n-1;j++){
            if(arr[j]<arr[min_ind]){
                min_ind = j;
            }
        swap(arr[i],arr[min_ind]);
        }
        
    }

}

int print_arr(int arr[],int n){
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {64,25,12,22,11};
    Selection_Sort(arr,5);
    print_arr(arr,5);
}