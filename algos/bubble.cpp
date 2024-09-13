#include<iostream>
using namespace std ;
int main(){
    int arr[5]={2,5,6,1,66};
    int temp ;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < len  ; i++){
        for(int j = 0 ; j < len-i-1 ; j++){
            if(arr[j]>=arr[j+1]){
              temp = arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }

        }
    }
    for(int i = 0; i < len ; i++){
        cout<<arr[i]<<"\t";
    }
}
