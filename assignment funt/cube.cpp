#include<iostream>
using namespace std ;
int tmp;
void cube(int a){
        if(a>0){
            tmp = a*a*a ;
        cout<<"cube is :"<<tmp;

        }
        else{
            cout<<"vlaue >0";
        }
}
int main(){
int n ;
cin>>n;
cube(n);
}
