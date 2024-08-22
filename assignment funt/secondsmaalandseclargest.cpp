#include<iostream>
using namespace std ;

int main(){
    int arr[5] = {48,63,2,45,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int low = INT_MAX;
    int high = INT_MIN;
    int m ,n;
    for(int i = 0 ; i <len ;i++){

        if(arr[i]>=high){
            high=arr[i];
        }
    }
    cout<<high<<"\n";
    for(int i= 0 ; i < len ; i++){
        if(arr[i]<high&&arr[i]>=arr[i-1]){
            m = arr[i];


        }
    }
    cout<<m<<"\n";
    for(int i = 0 ; i <len  ;i++){
        if(arr[i]<=low){
            low=arr[i];
        }
    }
    cout<<low<<"\n";

    for(int i = 0 ; i <len ;i++){
        if(arr[i]>=low&&arr[i]>=arr[i+1]){
            n = arr[i];
        }
    }
    cout<<n;



}
