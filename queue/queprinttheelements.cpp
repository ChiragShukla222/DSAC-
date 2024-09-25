#include<iostream>
using namespace std ;
#include<queue>
int main(){
    queue<int>node;
    node.push(4);
    node.push(5);
    node.push(88);
    int n = node.size();
    while(!node.empty()){
        cout<<node.front()<<"\t";
        node.pop();
    }


}
//how to display data without deleting
