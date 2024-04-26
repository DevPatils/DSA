#include <iostream>
using namespace std ; 

void remove_duplicates(int arr[], int n ){
    int i = 0;
    for (int j = 1 ; j<n ; j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }

}
void print_arr(int arr[],int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[8]={1,1,2,3,4,5,5,8};
    remove_duplicates(arr,8);
    print_arr(arr,8);

}