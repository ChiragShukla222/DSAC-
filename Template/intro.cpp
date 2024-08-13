#include<iostream>
using namespace std ;
 template<class cyb>
 cyb grt(cyb a, cyb b ){

    if(a>b){
        return a ;
    }
    else{
        return b ;
    }

 }
 int main(){
    cout<<grt(23,4)<<"\n";
    cout<<grt(34.6 , 78.0)<<"\n";
    cout<<grt('q','d')<<"\n";
 }
