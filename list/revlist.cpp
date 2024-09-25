#include<iostream>
#include<list>
using namespace std ;
class node{
    public : int data;
    node *nxt;
    node(int d){
        data = d ;
        nxt =NULL ;
    }

};
void insrt(node*&h ,int d){
    node *tmp = new node(d);
    tmp->nxt = h;
    h=tmp;
}
void show(node*&h){
    node*tmp = h;
    while(tmp!=NULL){
        cout<<tmp->data<<"\t";
        tmp = tmp->nxt ;
    }
}

int main(){
    node *h = new node(5);
    insrt(h,3);
    insrt(h,2);
    insrt(h,5);
    insrt(h,6);
    insrt(h,9);
    show(h);
}
