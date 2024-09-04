#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    vector<int>vec{4,8,9,6};
    sort(vec.begin(),vec.end(),[](int a , int b){return a>b;});
    cout<<"decending is : \n";
    for(auto p : vec){
        cout<<p<<"\t";
    }

}
