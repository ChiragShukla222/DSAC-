#include<iostream>
using namespace std ;
int main(){
    cout<<[](int a){return 100+a;}(4)<<"\n";
    cout<<[](int a , int b){return a+b;}(2,3);
    auto p=[](int x , int y){return x*y;};
    cout<<"\n"<<p(4,5);

}
