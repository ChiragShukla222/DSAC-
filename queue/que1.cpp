#include<iostream>
using namespace std ;
#include<vector>
class node{
    public : int data ;
    node *nxt ;
    public : node(int d){
        data = d ;
        nxt = NULL;
    }
};
class que {
    public : node*frnt;
    node *rear;
    public:que(){
    frnt = NULL;
    rear = NULL;
    }
    void pus(int v){
        node *h = new node(v);
        if(frnt ==NULL){
            frnt = n ;
            rear = n ;
        }
        void pop(){
        if(frnt==NULL){
            cout<<"under flow";

        }
        node *del  =frnt ;
        frnt = frnt->nxt;
        delete del ;

        }
        int peek(){
            if(frnt ==NULL){
                    cout<<"no data";
                    return 0;
            }
            return frnt->data;

        }
        bool empt(){
            if(frnt == NULL){
                return true;
            }
            return false ;
        }
    }
};

int main(){

    que q;
    q.pus(23);

}
