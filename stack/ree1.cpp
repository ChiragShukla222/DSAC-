#include<iostream>
using namespace std ;
#include<vector>
#include<stack>
int main(){
    stack<int>stk;
    vector<int>vec;
    int tmp ;
    stk.push(7);
    stk.push(8);
    stk.push(9);
    stk.push(2);
    while(!stk.empty()){
        tmp = stk.top();
        stk.pop();
        vec.push_back(tmp);
    }
    for(auto i = vec.rbegin() ; i!=vec.rend();i++){
        cout<<*i<<"\t";
    }






}
