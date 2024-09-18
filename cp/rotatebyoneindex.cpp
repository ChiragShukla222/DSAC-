#include<iostream>
using namespace std ;
int main(){
    int arr[5]={4,5,6,1,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int tmp;
    int k = 4;
    for(int i = 0 ;i<len ;i++){
        if(arr[i]==k){
            tmp=i;
        }
    }
    if(tmp!=-1){
        for(int i = 0; i < len-1;i++){
            arr[i]=arr[i+1];
        }
        arr[len-1]=k;
    }
    for(int i =0 ; i<len ;i++){
        cout<<arr[i]<<"\t";
    }
}

