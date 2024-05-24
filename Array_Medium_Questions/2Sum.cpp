#include <iostream>
using namespace std;
#include<map>
int sum2(int arr[],int n ,int target){
    map <int,int>mpp;
    for(int i = 0;i<n;i++){
        
        int a = arr[i];
        int more = target-a;
        if(mpp.find(more) != mpp.end()){
            return 1;
        }
        mpp[a] = i;
    }
    return 0;
}
int main(){
    int arr[5] ={2,6,5,8,11}; 
    int target = 14;

    cout<<sum2(arr,5,target);

}