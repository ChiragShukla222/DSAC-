#include<iostream>
#include<vector>
#include<iterator>
using namespace std ;
int main(){
    vector<int>vec ;
    vector<int>::iterator up = vec.begin();
    cout<<"enter the size of vector";
    int n ;
    cin>>n;
    for(int i = 0 ; i < n ; i++){

        int a ;
        cin>>a;
        vec.push_back(a);

  }
  for(auto l : vec){
    cout<<l<<"\t";
  }

  vec.insert(up+2,{3,4,5,0});
  for(auto l :vec){
    cout<<l<<"\n";
  }

}
