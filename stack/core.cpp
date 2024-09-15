#include<iostream>
using namespace std ;
class stck{
    int *p  , n ;
    public: int data;
    stck(int d){
        n = d ;
        p = new int [n];
        data = -1 ;
    }
    void insrt(int a){
    if(data==n-1){
        cout<<"overflow";
        return ;
    }
    data++;
    p[data] = a;
}
void pops(){
    if(data==-1){
        cout<<"underflow";

    }
    data--;
}
int datas(){
    return p[data];
}
};

int main(){
    stck obj(3);
    obj.insrt(5);
    obj.insrt(6);
    obj.insrt(8);
    while(obj.data!=-1){
        cout<<obj.datas()<<"\t";
        obj.pops();
    }
}
