#include<iostream>
using namespace std ;
#include<forward_list>
int main(){
    forward_list<int>temp;
    temp.push_front(8);
    temp.push_front(9);
    temp.push_front(88);
    temp.push_front(96);
    for(auto l:temp){
        cout<<l<<"->";
    }

}
