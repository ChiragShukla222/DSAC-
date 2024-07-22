#include<iostream>
using namespace std ;
int fac(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1 ;
    }
    int fc = fac(n-1)+fac(n-2);//relationship
    return fc;
}
int main(){
    int n ;
    cout<<"enter the nubmer where you want to know of the series";
    cin>>n;
    cout<<"value of that position  is :"<<fac(n);

}
