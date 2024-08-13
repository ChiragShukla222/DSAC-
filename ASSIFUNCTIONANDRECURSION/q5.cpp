#include<iostream>
using namespace std ;
 int flag;
 int sum ;
    int tmp ;
int prime(int &a){

        for(int i=1 ;i<a;i++){
            if(a%i==0){
                flag++;
            }

        }
        if(flag==2){
            return 1;
        }
        else{
            return 0;
        }
}
//armsstrong nubmer
//153 1+5+3 = 153
int arm(int &a){
    int b = a/100;
    int c = a%100;
    int d = c/10;
    int e = c%10;
    b=b*b*b;
    d=d*d*d;
    e=e*e*e;
    sum = b+d+e ;
    if(sum==a){
        return 1 ;
    }
    else{
        return 0;
    }


}
//perfect
int perfect(int a){
        for(int i = 1 ; i < a ; i++){
            if(a%i==0){
                tmp = i;
            }
        }
        if(tmp+tmp==a){
            return 1;
        }
        else{
            return 0;
        }
}

int main(){
    int a ;
    cout<<"enter the number ";
    cin>>a;
    prime(a);
    if(prime(a)==1){
        cout<<"it is prime nubmer \n";
    }
    else{
        cout<<"not a prime "<<"\n";
    }
    arm(a);
    if(arm(a)==1){
        cout<<"arm strong"<<"\n";
    }
    else{
        cout<<"not arm strong"<<"\n";
    }
    perfect(a);
        if(perfect(a)==1){
            cout<<"perfect number";
        }
        else{
            cout<<"not perfect";
        }
}
