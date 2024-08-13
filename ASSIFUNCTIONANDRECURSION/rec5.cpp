#include<iostream>
using namespace std ;
int flag;
void prime(int n) {
    for(int i = 1 ; i <= n ; i++){
        if(n%i==0){
            flag++;
        }
    }
    if(flag==2){
        cout<<"prime number found \n";
    }
    else{
        cout<<"\n not a prime nubmer";
    }


}

void arm(int n){
    int sum ;
    int a = n/100;
    int b = n%100;
    int c = b/10;
    int d =  b%10;
    cout<<a<<"\t"<<c<<"\t"<<d;
    a=a*a*a;
    c=c*c*c;
    d=d*d*d;
    sum = a+c+d;
    if(sum==n){
        cout<<"arm found";
    }
    else{
        cout<<"no arm found";
    }


}

void pfnum (int n){
    int tmp , sum ;
    for(int i = 1 ; i < n; i++){
        if(n%i==0){
            tmp = i;
        }
        sum = tmp+tmp;
    }
    if(sum==n){
        cout<<"pfnum";
    }
    else{
        cout<<"not pfnum";
    }



}








int main(){
    int n =  6;
    arm(n);
    cout<<"\n";
    prime(n);
    cout<<"\n";
   pfnum(n);


}
