#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    int t = n-1 ;
    while(t>0){
        n = n * t ;
        t--;
    }

    cout<<n;

}
