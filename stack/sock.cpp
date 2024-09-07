#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int socks(vector<int>arr ,int m){

        int flag = 0;
        sort(arr.begin(),arr.end());

        for(int i= 0 ; i < m ; i++){

            if(arr[i]==arr[i+1]){
                flag++;

            }


        }
        return flag;


}


int main(){

    vector<int>arr{1,5,6,7,8,7,5,1};
    int m ;
    m = arr.size();

    cout<<socks(arr,m);



}
