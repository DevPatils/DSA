#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int i=1;
    int counter = i;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<counter<<" ";
            counter++;
            j++;
        }
        cout<<endl;
        i++;
    }
}