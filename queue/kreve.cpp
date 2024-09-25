#include<iostream>
using namespace std ;
#include<stack>
#include<queue>
void rev (queue<int>&q,int k){
    stack<int>st;
    while(!q.empty()){
        if(q.front()==k){
            st.push(q.front());
            q.pop();

        }
    }
    while(!st.empty()){
        cout<<st.top()<<"\t";
        st.pop();
    }
}
int main(){
    queue<int>q;
    q.push(2);
    q.push(9);
    q.push(8);
    q.push(5);
    q.push(1);
    q.push(7);
    rev(q,3);

}
