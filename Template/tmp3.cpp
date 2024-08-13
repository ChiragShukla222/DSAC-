#include<iostream>
using namespace std ;
template <class saymyname, class name >
saymyname two(saymyname a , name b){

    if(a>b){
        return a ;
    }
    else{
        return b;
    }

}

int main(){
    cout<<two(78,85.00);
    cout<<two("h","k");

}
