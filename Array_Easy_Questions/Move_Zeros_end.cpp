#include <iostream>
using namespace std ; 
#include <vector>

void move_zeros(int arr[], int n){
    vector<int> temp;
    // Collect all non-zero elements
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]); // Use push_back to add elements
        }
    }

    // Fill the original array with the elements from the temp vector
     
    for(int i = 0 ; i < temp.size(); i++){
        arr[i] = temp[i];
    }

    // Fill the remainder of the array with zeros
    for(int i = 0; i < n; i++){
        arr[i] = 0;
    }
}

void print_arr(int arr[],int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}


int main() {
int arr[6] = {0,2,0,4,0,6};

move_zeros(arr,6);
print_arr(arr,6);
}