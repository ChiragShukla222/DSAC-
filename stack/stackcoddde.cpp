#include<iostream>
using namespace std ;
class stk {
    int  *p , n ;
    public : int top ;
    public : stk (int t){
        n = t ;
        p = new int [n];
        top = -1 ;

    }
    void pus (int a){
         if(top==n-1 ){
            cout<<"overflow";
            return ;
         }
         top++;
         p[top]=a;

    }
    void pops(){
        if(top==-1){
            cout<<"underflwo";
        }
        top--;
    }
    int tops(){
            return p[top];
    }
    ~stk(){
    delete [] p;
    }

};

int main(){

    stk obj(5);
    obj.pus(45);
    obj.pus(451);
    obj.pus(452);
    obj.pus(453);
    obj.pus(897);
    while(obj.top!=-1){
        cout<<obj.tops()<<"\t";
        obj.pops();
    }
    //cout<<obj.tops();
   // obj.pops();
   // cout<<"after pop";
   // cout<<obj.tops();


}
