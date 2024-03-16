#include <iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int i= 1;
    while(i<=row){
        int j = 0;
        while(j<row){
            cout<<(row-j)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}