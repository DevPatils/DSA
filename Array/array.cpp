#include <iostream>
using namespace std;

int print_array(int arr[],int size){
        for(int i =0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    


int main(){
    int number[15];
    // cout<<"Value at 0 index :"<<number[0];
    // cout<<"Value at 0 index :"<<number[15];

    int second[3]={5,4,7};
    cout<<"Value at 0 index :"<<second[2];

    print_array(second,3);

}

