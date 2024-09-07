#include<iostream>
using namespace std ;
int main(){
    int first , last ;
    int m = 65271 ;
    last =  m %10;
    while(m>0){
        first = m %10;
        m=m/10;
    }
    swap(first ,last );
    cout<<first<<"\t"<<last;


}
