#include<iostream>
using namespace std ;
#include<stack>
#include<vector>
int main(){

    stack<int>st;
    stack<int>sk;
    st.push(5);
    st.push(4);
    st.push(2);
    st.push(1);
    cout<<"given stack is : \n";
    while(!st.empty()){
        sk.push(st.top());
        cout<<st.top()<<"\t";
        st.pop();
    }
    cout<<"\n rev stack : \n";
    while(!sk.empty()){
        cout<<sk.top()<<"\t";
        sk.pop();
    }

}
