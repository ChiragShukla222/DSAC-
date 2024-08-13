#include<iostream>
using namespace std ;
int number(int a , int b){
        if(a>=b){
            return 1;
        }
        else{
            return 0;
        }

}
int main(){
    int a , b ;
    cout<<"enter a \t"<<"\n";
    cin>>a;
    cout<<"enter b \t";
    cin>>b ;
    number(a ,b);
    if(number(a,b)==1){
        cout<<" a is greater";
    }
    else{
        cout<<"a is smaller";
    }


}
