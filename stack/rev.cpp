#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>ts;
    st.push(7);
    st.push(889);
    st.push(88);
    st.push(99);
    st.push(56);
    while(!st.empty()){
        ts.push(st.top());
        cout<<st.top()<<"\t";
        st.pop();
    }
    cout<<"rev an stack";
    while(!ts.empty()){
        cout<<ts.top()<<"\t";
        ts.pop();
    }
}
