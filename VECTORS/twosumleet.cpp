#include<iostream>
using namespace std ;
#include<algorithm>
#include<vector>
int main(){
    int n;
    vector<int>vec{7,8,9,55,66};
    int sum;
    cout<<"enter the target ";
    cin>>n;
        int len = vec.size();
    sort(vec.begin(),vec.end());
    for(int i = 0 ; i < len-1 ; i++ ){
        sum = vec[i]+vec[i+1];
        if(sum==n){
        return{i,i+1};
    }
    }



}
