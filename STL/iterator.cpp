#include<iostream>
using namespace std ;
#include<vector>
#include<iterator>

int main(){
    vector<int>v{2,3,5,6};
    for(auto i : v){
        cout<<i<<"\t";
    }
    vector<int>::iterator p = v.begin();

    cout<<"\n insert \n";
    v.insert(p+2,{4,5,6,2,3});
    for(auto r : v){
        cout<<r<<"\t";
    }

    vector<int>vec{5,2,3,6,8};
    cout<<"\n reverse vector \n";
    for(auto i = vec.rbegin() ; i != vec.rend() ;i++){
        cout<<*i<<"\t";
    }

}
