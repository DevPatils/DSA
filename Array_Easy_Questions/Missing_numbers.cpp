#include<iostream>
using namespace std ; 
#include <vector>

//Brute:
void missing_numbers(int arr[] ,int size, int n ){
    int ans;
    for(int i = 1 ;i<=n ; i++){
          
        int flag = 0;
        for(int j =0;j<size;j++){
            arr[j]==i;
            flag = 1;
            break;
        }
        if(flag==0){
            cout<< i;
            break;
        }
    }
    // return -1;
    
}

int main(){
    int arr[4] ={1,2,3,4};
    missing_numbers(arr,4,5);


}