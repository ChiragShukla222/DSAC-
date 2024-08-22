#include<iostream>
using namespace std ;
int main(){


    int arr[5] = {45,2,5,3,4};
    int low = INT_MAX;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < len ;i++){

        if(arr[i]<=low){
            low = arr[i];
        }
    }
    cout<<low;

}
