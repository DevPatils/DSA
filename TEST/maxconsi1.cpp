#include<iostream>
using namespace std ;

int find_consecutive_1(int arr[],int n){
    int maximum = 0;
    int counter = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==1){
            counter ++;
            maximum = max(maximum,counter);
        }
        else{
            counter=0;
        }
    }
    return maximum;
}

int main(){
    int arr[6] = {1,1,0,0,5,1};
    int x = find_consecutive_1(arr,6);
    cout<<x;

}