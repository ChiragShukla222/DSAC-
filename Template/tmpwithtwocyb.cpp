#include<iostream>
using namespace std ;
template < class yoiii>
yoiii even(yoiii a , yoiii b ){
    if(a%b==0){
        return 1 ;
    }
    else{
        return 0;
    }
}
int main(){
cout<<even(4,2);
}
