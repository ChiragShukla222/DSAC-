#include<iostream>
using namespace std ;
#include<array>
int main(){
    array<int , 5>arr{3,4,5,65,7};
    for(int i = 0 ; i <arr.size() ;i++){
        if(arr.at(i)%2!=0){
            return 1 ;

        }
        else{
            return 0 ;
        }
    }
}
