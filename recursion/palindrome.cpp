#include<iostream>
using namespace std ;

int palin(int n,int t){

    if(n==0){
        return 1 ;
    }


    t = t*10+n%10 ;

    return palin(n/10,t);




}
int main(){
cout<<"palinf :"<<palin(121,0);
int t =  palin(121 ,0);
if(t==1){
    cout<<"ppp";
}
}
