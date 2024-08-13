#include<iostream>
using namespace std ;
#include<array>
int main(){

    array<int  , 4> cyb{7,9,939,89};
    for(int i = 0 ;i < 4 ; i++){
        cout<<cyb.at(i)<<"\t";
    }
    array<int , 4>bnm{8,9,30,9};
    for(auto v:bnm){
        cout<<"\n"<<v<<"\t";
    }
    cyb.swap(bnm);
    cout<<"swapped array is :";
    for(auto v:cyb){
        cout<<v<<"\t";
    }



}
