#include<iostream>
#include<stack>
using namespace std ;
int main(){
    stack<string>st;
    stack<string>ts;
    st.push("sky");
    st.push("is");
    st.push("blue");
    while(!st.empty()){
        ts.push(st.top());
        cout<<st.top()<<"\t";
        st.pop();
    }
    cout<<"\n";
    /*while(!ts.empty()){
        cout<<ts.top()<<"\t";
        ts.pop();
    }*/

}
