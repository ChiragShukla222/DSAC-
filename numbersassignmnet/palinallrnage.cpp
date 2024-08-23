#include<iostream>
using namespace std ;
int main(){
    int r = 0 ;
    int tmp ;
    for(int i = 200 ; i >0;i-- ){
            tmp  =i;
        r = r*10+i%10;
        i=i/10;
        if(r==tmp){
            cout<<"palin"<<r;

        }


    }


}
