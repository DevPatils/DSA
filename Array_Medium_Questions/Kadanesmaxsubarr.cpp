#include <iostream>
using namespace std;

int find_max_subarr(int arr[],int n){
    int sum = 0;
    int maxi = arr[0];
    int start = 0;
    int end = 0;
    for(int i =0;i<n;i++){
        sum=sum+arr[i];
        if(sum>maxi){
            maxi = sum;
            end = i;
        }
        if(sum<0){
            sum = 0;
            start = i+1;
        }
    }
    cout<<"Starting "<<start<<endl;
    cout<<"ending "<<end<<endl;
    for(int i = start ; i<=end;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    return  maxi ;
}

int main(){
    int arr[4]={1,2,3,4};
    int x = find_max_subarr(arr,4);
    cout<<"Sum is "<<x;
}