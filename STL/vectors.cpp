#include <iostream>
using namespace std;
#include <vector>

void explainVector(){
    vector<int> v ;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[1];
    cout<<endl;
    vector<int> v2(5,100) ; 
    cout<<v2[3];
    
    cout<<endl;
    v2.erase(v2.begin(),v2.begin()+2);
    for(vector<int>::iterator it = v2.begin(); it!=v2.end();it++){
        cout<< *(it)<< " ";
    }
}

int main(){
    explainVector();
    
}