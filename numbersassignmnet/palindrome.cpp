#include<iostream>
using namespace std ;
int r =0;
int tmp;
void palin(int n){
tmp = n ;

    while(n>0){
        r= r*10+n%10;
        n=n/10;
    }

    if(tmp==r){
        cout<<"palin" ;
    }
    else{
        cout<<"no palin";
    }

}
int main(){
    int n ;
    cout<<"number enter \n";
    cin>>n;
    palin(n);
}
