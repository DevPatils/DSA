#include<iostream>
using namespace std;

int get_max(int arr[],int size){
    int max = INT8_MIN;
    for(int i =0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max;
}
int get_min(int arr[],int size){
    int min = INT8_MAX;
    for(int i=0; i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cin>>size;
    int num[3]={1,4,3};

    for(int i;i<size;i++){
        cin>>num[i];
    }
    cout<<"Max Value is "<<get_max(num,3);
    cout<<endl;
    cout<<"Min Value is "<<get_min(num,3);

}