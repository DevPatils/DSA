#include<iostream>
using namespace std;

int find_consecutive_1(int arr[],int n){
    int maxi = 0;
    int counter = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==1){
            counter ++;
            maxi = max(maxi,counter);
        }
        else{
            counter=0;
        }
    }
    return maxi;
}

int main(){
    int arr[7] = {1,1,2,3,1,1,1};
    int x = find_consecutive_1(arr,7);
    cout<<"The maximum number of 1's in an array is : " << x;

}