#include<iostream>
#include<algorithm>
using namespace std ;
int main(){

    int arr[] = {78,96,45,1,6,78,56};
    int temp;
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len);
    for(int i = 0 ; i < len ;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    for(int i = 0 ; i < len ; i++){
        for(int j  =i+1 ; j <len-1 ;j++){
            if(arr[i]==arr[j]){
             arr[i] = arr[i-len];

            }

        }

    }
    cout<<"\n after deletion \n";
    for(int i = 0 ; i < len ;i++){
        cout<<arr[i]<<"\t";
    }

}
