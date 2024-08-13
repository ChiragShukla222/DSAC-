#include<iostream>
using namespace std ;
int pow(int a ,int b){
    if(a==0){
        return 0;
    }
    else if(b==0){
        return 1;
    }

    int c  = a*pow(a,b-1);
    return c ;

}
int main(){

    cout<<"the pow is "<<pow(2,3);


}
