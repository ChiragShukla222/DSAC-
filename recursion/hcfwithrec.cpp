#include<iostream>
using namespace std ;
 int hcf(int a , int b){
   if (b!=0){
    return hcf(b,a%b);
   }

 }
int main(){
    cout<<"hcf is :"<<hcf(4,12);
}
