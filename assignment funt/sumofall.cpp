#include<iostream>
using namespace std ;
int main(){
    int arr[6] = {7,5,3,2,1,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum ;
    if(len==0){
        cout<<"enter minimum 2 elements";
    }
    else{
    for(int i = 0 ; i < len ;i++){
        sum += arr[i];
    }
    cout<<"sum of the given arr is :"<<sum;
    }
}
