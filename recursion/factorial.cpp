#include<iostream>
using namespace std ;
int fac(int a){

    if(a==0){
        return 0 ;

    }
    else if(a==1){
        return 1 ;
    }

    int ans  = a*fac(a-1);
    return ans;
}

int main(){
    cout<<"factorial is :"<<fac(5);
}
