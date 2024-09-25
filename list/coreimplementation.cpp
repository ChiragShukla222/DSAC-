//self reference class
#include<iostream>
using namespace std ;
class node {

    public:int data ;

    node *nxt ;

    public:node(int d){
            data = d ;
            nxt = NULL;
    }

};
void insrt (node* &h, int d){
    node *n = new node(d);
    if(h==NULL){
        h = n ;
        return ;
    }
    node *tmp = h ;
    while(tmp->nxt!=NULL){
        tmp = tmp->nxt;
    }
    tmp->nxt= n;

}
void show(node* &h ){

    node *tmp = h ;
    while(tmp!=NULL){
        cout<<tmp->data<<"->";
        tmp = tmp->nxt;

    }
    cout<<"NULL"<<"\n";


}
void srch(node* &h , int value){
    int c = 0 ;
    node *tmp = h ;
    while(tmp!=NULL){
        if(tmp->data==value){
            c++;
            break;
        }
        tmp = tmp->nxt;
    }
    if(c==1){
        cout<<"found";
    }
    else{
        cout<<"not  found";
    }


}
int main(){
    node *h = NULL;
    insrt(h,21);
    insrt(h,44);
    insrt(h,88);
    insrt(h,99);
    show(h);
    srch(h,44);
}
