#include<iostream>
using namespace std ;
#include<vector>
#include<iterator>
int main(){

vector<int>p;
cout<<p.size()<<"\n";
p.push_back(100);
p.push_back(300);
p.push_back(30);
p.push_back(600);
p.push_back(20);
for(auto i : p){
    cout<<i<<"\t";
}




}
