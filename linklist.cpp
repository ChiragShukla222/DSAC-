#include<iostream>
using namespace std ;
#include<forward_list>
#include<algorithm>
int main(){
    forward_list<int>li{4,5,7,8,2,4};
    li.push_front(12);
    li.pop_front();
    cout<<"length of list is \n";
    cout<<std::distance(li.begin() , li.end());

}
