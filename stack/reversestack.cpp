#include<iostream>
using namespace std ;
#include<stack>
int main(){

    stack<int>l;
    stack<int>p;
    l.push(4);
    l.push(8);
    l.push(9);
    l.push(5);
    l.push(7);
    while(!l.empty()){
        p.push(l.top());
        l.pop();

    }
    while(!p.empty()){
        cout<<p.top()<<"\t";
        p.pop();
    }

}
