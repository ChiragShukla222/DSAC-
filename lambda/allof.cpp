#include<iostream>
#include<vector>
using namespace std ;
#include<algorithm>
int main(){

    vector<int>vec{7,8,9,4,5,6,1};
    int n;


    cout<<all_of(vec.begin(),vec.end(),[](int a){return a>2;});
    cout<<"\n";
    cout<<none_of(vec.begin(),vec.end(),[](int a){return a>200;});
    cout<<"\n";
    cout<<any_of(vec.begin(),vec.end(),[](int a){return a<2;});
}
