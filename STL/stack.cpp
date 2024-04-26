#include<iostream>
using namespace std;
#include<stack>
#include<queue>
void explainStack(){
    stack<int> st;
    queue<int> q;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<st.top();

    cout<<st.size();

    cout<<st.empty();

    q.pop();
}

int main(){
    explainStack();
}