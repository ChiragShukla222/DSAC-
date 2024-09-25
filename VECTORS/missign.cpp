#include<iostream>
using namespace std ;
#include<vector>
void bh(vector<int>vec){
      int n = vec.size();
    int k = n*(n+1)/2;
    int sum = 0;
    for(int i = 0 ; i  < n ; i++){
        sum=sum+vec[i];
    }
    int ans = k -sum;
    cout<<ans;

}
int main(){
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(5);
    bh(vec);

}
