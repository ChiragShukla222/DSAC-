#include<iostream>
using namespace std ;
int main(){

    int flag =0 ;
    for(int i =  1 ; i  <= 100 ; i++){
   int num = i;
        while(num>=0){

        if(i%10==9){
            flag++;
        }
            num = num/10;
        }

    }
    cout<<flag;
}
