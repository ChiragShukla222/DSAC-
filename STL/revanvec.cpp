#include<iostream>
using namespace std;
#include<vector>
#include<iterator>

int main(){
    vector<int>vec{10,8,96,56,23} ;


    for(auto i = vec.rbegin(); i != vec.rend() ; i++){
        cout<<*i<<"\t";
    }


}
