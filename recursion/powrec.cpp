#include<iostream>
using namespace std ;
int pwrec(int b , int p){
        if(b==0){
            return 0;
        }
        if(p==0){
            return 1 ;
        }
        int c  = b * pwrec(b,p-1) ;//recurssion reationship
        return c ;

}
int main(){
    int a , d;
    cout<<"enter the base";
    cin>>a;
    cout<<"enter the pow ";
    cin>>d;
    cout<<"pow is"<< pwrec(a , d );


}
