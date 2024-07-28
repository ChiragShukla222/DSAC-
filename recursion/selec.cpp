#include<iostream>
using namespace std ;
int main(){
    int arr[] ={8,52,9,6,1,3};
    int len  = sizeof(arr)/sizeof(arr[0]);
    int tmp = 0 ;
    cout<<"before sorting: \n";
    for(int i = 0; i < len  ;i++){
        cout<<arr[i]<<"\t";
    }
    //in selection sort the first element is considered as chotu element
    //after the full iteration the elements swaps
    for(int i = 0 ; i < len ; i++){
        int chotu = i ;
        for(int j = i+1 ; j < len ;j++){
            if(arr[chotu]>arr[j]){
                chotu =j ;
            }
        }
        if(chotu != i){
            tmp = arr[chotu];
            arr[chotu]=arr[i];
            arr[i]=tmp;
        }


    }cout<<"after selection : \n";
    for(int i = 0  ; i  <  len ; i++){
        cout<<arr[i]<<"\t";
    }
}
