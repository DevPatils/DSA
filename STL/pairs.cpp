#include <iostream>
using namespace std;

void explain_Paris(){
    pair<int,int> p = {1,2};
    pair<int ,pair<int,int>> p1 = {1,{7,2}};
    cout<<p.first;
    cout<<endl;
    cout<<p1.second.first;
}

int main(){
    explain_Paris();
}

