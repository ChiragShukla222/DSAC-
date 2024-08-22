#include<iostream>
#include<algorithm>
using namespace std ;

int main(){

int arr [5] = {7,8,52,96,1};
int len = sizeof(arr)/sizeof(arr[0]);

sort(arr,arr+len);
for(int i = len-1 ; i >=0  ;i--){

    cout<<arr[i]<<"\t";
}



}
