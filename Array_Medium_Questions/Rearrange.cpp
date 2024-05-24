#include <iostream>
#include <vector> // Add this line
using namespace std;

int printarr(int arr[],int n ){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//Brute
int Rearrang_p_N(int arr[],int n){
    vector<int> posi;
    vector<int> negi;

    for(int i =0;i<n;i++){
        if(arr[i]<0){
            negi.push_back(arr[i]);
        }
        else{
            posi.push_back(arr[i]);
        }
    }
    for(int i = 0;i<n;i++){
        arr[i*2] = posi[i];
    }
    for(int i = 0;i<n;i++){
        arr[i*2+1] = negi[i];
    }
}

//Optimal:

int Rearrang_p_N_O(int arr[],int n){
    vector<int > ans(n,0);
    int positive = 0;
    int negetive = 1;
    for(int i = 0;i<n;i++){
        if(arr[i]<0){
            ans[negetive] = arr[i];
            negetive +=2;
        }
        else{
            ans[positive] = arr[i];
            positive+= 2;
        }
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
}





int main(){
    int arr[6] = {3,1,-2,-5,2,-4};
    Rearrang_p_N_O(arr,6);
    // printarr(arr,6);

}