#include <iostream>
using namespace std;

int Bubble_sort(int arr[],int n ){

    bool isswapped = false; // optimization

    for (int i = 0 ; i<=n-1;i++){
        //outer loop
        for(int j =0;j<=n-i;j++){//n-i gives you optimized solution
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswapped=true;
            }
        }
        if(isswapped==false){
            break;
        }
    }
}
int print_arr(int arr[],int n){
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6] ={1,10,7,6,14,9}; 
    Bubble_sort(arr,6);
    print_arr(arr,6);

}