#include <iostream>
using namespace std;

int Insertion_sort(int arr[], int n ){
     
    for(int i =1;i<=n;i++){
        int temp = arr[i];
        int j = i-1;
        for(j ; j>=0;j--){
            if(arr[j]>temp){
               swap(arr[j+1],arr[j]);
            }
            else{
                break;
            }
        }
        // arr[j+1]=temp;
    }

}
int print_arr(int arr[],int n){
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[4] ={1,3,2,4};
    Insertion_sort(arr,4);
    print_arr(arr,4);

}

