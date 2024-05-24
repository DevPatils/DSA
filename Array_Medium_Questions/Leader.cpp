#include <iostream>
using namespace std;
#include<vector>

//Optimal direct
int leaders(int arr[],int n){
    vector<int> ans;
    int maxi = INT16_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
}

int main(){
    int arr[6] = {10,22,12,3,0,6};
    leaders(arr,6);

}