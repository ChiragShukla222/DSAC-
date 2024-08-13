#include<iostream>
using namespace std;
int eve(int &a){
        if(a%2==0){
            return 1 ;
        }
        else{
            return 0;
        }


}
int main(){
    int a ;
    cout<<"enter the nubmer :";
    cin>>a;
    eve(a);
    if(eve(a)==1){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }

}
