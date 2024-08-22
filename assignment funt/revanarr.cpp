#include<iostream>
using namespace std ;
int main(){
    int arr[5]= {7,85,9,15,85};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = len-1 ;  i >=0 ;i--){
        cout<<arr[i]<<"\t";
    }
}
