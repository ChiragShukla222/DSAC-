#include<iostream>
using namespace std ;
int k,l,m;
float area(int &a){
     k = 3.14*a*a ;
return k;
}
float cir(int a){
    l = 2*3.14*a;
    return l;

}
int dia(int a){
        m = 2*a;
        return m;
}

int main(){
        int n;
        cout<<"enter the radius";
        cin>>n;
        area(n);
        cout<<k<<"\n";
        cir(n);
        cout<<l<<"\n";
        dia(n);
        cout<<m;

}
