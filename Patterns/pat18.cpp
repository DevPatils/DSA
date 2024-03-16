#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int i = 1;
    
    while(i<=n){
        int count =1;
        int x =1;
        while(x<=(n-i)){
            cout<<" ";
            x++;
        }
        int j =1;
        while(j<=i){
            cout<<count;
            j++;
            count++;
        }
        int y =1;
        int start = i-1;
        while(y<=i-1){
            cout<<start;
            start--;
            y++;
            
        }
        cout<<endl;
        i++;
    }
}