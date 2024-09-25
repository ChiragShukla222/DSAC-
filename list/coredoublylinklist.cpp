#include<iostream>
using namespace std;
class node{
    public:int data ;

    node *nxt;
    node(int d){
data = d;
nxt = NULL;
}
};

void insrtHead(node* &h , int d){
    node *tmp = new node(d);
    tmp->nxt = h;
    h= tmp;
}
void insrtTail(node* &h , int d){
    node *n = new node(d) ;
    if(h==NULL){
        h=n;
        return;
    }
    node* tmp = h ;
    while(tmp->nxt!=NULL){
        tmp=tmp->nxt;
    }
    tmp->nxt=n;

}
void show(node* &h){
    node *tmp = h;
    while(tmp!=NULL){
        cout<<tmp->data<<"->";
        tmp = tmp->nxt;

    }
    cout<<"NULL";
}
int main(){
    node *h = new node(5);
    insrtHead(h,100);
    insrtTail(h,30);
    insrtHead(h,44);
    insrtHead(h,77);
    insrtTail(h,45);
    show(h);
}
