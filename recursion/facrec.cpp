#include<iostream>
using namespace std ;
int factorial(int f){
        if(f==0){
            return 0;
        }
        if(f==1){
            return 1 ;
        }
        int fc = f *factorial(f-1);
        return fc ;

}
int main(){
    int f ;
    cout<<"enter the number to find the fac :";
    cin>>f ;
    cout<<"result :5"<<factorial(f);
}
