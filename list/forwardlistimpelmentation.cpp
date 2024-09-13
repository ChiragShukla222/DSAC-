#include<iostream>
using namespace std ;
class node {
    public : int data ;
    node *nxt ;
    node (int d)
    {

        data = d;
        nxt = NULL;
    }

};
void inserthead(node* &h , int d){

node* tmp = new node(d);
tmp->nxt = h ;
h = tmp ;
}
void show(node* &h){
    node *tmp = h ;
    //int flag ;
    while(tmp != NULL){
        cout<<tmp->data<<"->";
        tmp = tmp->nxt;
        //flag++;
    }
    cout<<"NULL"<<"\n";
    //cout<<flag;
}
void len(node* &h){
     node *tmp = h ;
    int flag ;
    while(tmp != NULL){

        tmp = tmp->nxt;
        flag++;

    }
    cout<<"nodes are "<<flag;


}
int main(){
    node *h = new node(6);

    inserthead(h,4);
    inserthead(h,5);
    inserthead(h,2);
    inserthead(h,7);
    show(h);
    len(h);

}
