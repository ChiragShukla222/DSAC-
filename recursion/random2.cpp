#include<iostream>
using namespace std ;
int fibo(int n){
        if(n==0){
            return 0;
        }
        else if (n==1){
            return 1 ;
        }

        int torial = fibo(n-1)+fibo(n-2);
        return torial;
}
int main(){
    cout<<"fibo series up to 8 is : \t"<<fibo(8)<<"\t";
}
