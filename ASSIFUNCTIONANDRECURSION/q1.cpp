#include<iostream>
using namespace std ;

void cube(int n){
        int a = n*n*n;
        cout<<"cube is :"<<a;
}


int main(){
    int n ;
    cout<<"enter the number to find cube";
    cin>>n;
    cube(n);


}
