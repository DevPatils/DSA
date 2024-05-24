#include <iostream>
using namespace std ; 
#include <vector>

//Brute
void apperars_once_brute(int arr[],int n){
    
    for(int i =0;i<n;i++){
        int count = 0 ; 
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<< arr[i];
        }
    }
}


//Better : using hashing 
void apperars_once_better(int arr[],int n){
    int maxi= arr[0];
    for(int i = 0 ;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    vector<int> hash(maxi + 1, 0);

    for(int i =0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i =0 ; i<n;i++){
        if(hash[arr[i]]==1){
            cout<<arr[i];
        }
    }
}


//optimal:
void apperars_once_optimal(int arr[],int n){
    int XOR = 0;
    for(int i =0;i<n;i++){
        XOR = XOR^arr[i];
    }
    cout<<XOR;
}


int main(){
    int arr[5] = {1,1,3,2,2};
    // apperars_once(arr,5);
    // apperars_once_better(arr,5);
    apperars_once_optimal(arr,5);
}