#include<iostream>
using namespace std ;
class node{

    public: int data ;
    node* nxt ;
    node(int d){
        data =d;
        nxt=NULL;
    }
};
    void inserthead(node*&h,int d){
        node *tmp = new node(d);
        tmp->nxt = h;
        h = tmp ;
    }
    void show(node* &h){
        node*tmp =h ;
        while(tmp!=NULL){
            cout<<tmp->data<<"-<";
            tmp = tmp->nxt;
            cout<<"NULL";
        }
    }
    void even(node*&h,node*&eve){
        node*tmp = h ;

        int sum ,odd ,lag,flag;
        while(tmp!=NULL){
            if(tmp%eve==0){

                sum=sum+tmp;
                flag++;
            }
            else{
                odd= odd+tmp;
                lag++;
            }
        }
        cout<<"sum of even nodes is "<<sum<<"number of even nodes are "<<flag;
        cout<<"sum of odd nodes is "<<odd<<"number of odd nodes are "<<lag;


    }
int main(){
    node *h = new node(6);
    node *eve = new node(2);
    inserthead(h,4);
    inserthead(h,8);
    inserthead(h,5);
    show(h);
    even(h,eve);



}
