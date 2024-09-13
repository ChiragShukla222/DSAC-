#include<iostream>
using namespace std ;
int qs(int arr[] , int low , int high){
    int temp ;
    int pivot =  low+1 ;
    int r = high;
    int l = low ;
    do{
        while(arr[l]<=pivot){
            l++;
        }
        while(arr[r]>pivot){
            r--;
        }
        if(l<r){
            temp = arr[r];
            arr[r]=arr[l];
            arr[l]=temp;
        }
    }
    while(l<r);

        temp = arr[low];
        arr[low]=arr[r];
        arr[r]=temp;
        return r;

}
int partit(int arr[], int low , int high){
    if(low<high){
    int pivot = qs(arr,low,high);
    qs(arr,low,pivot-1);
    qs(arr,pivot+1,high);
    }
}
void dispaly(int arr[] , int len){

    for(int i = 0 ; i < len-1  ; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[5] ={8,2,4,3,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"before qs";
    dispaly(arr,len);
    qs(arr,0,len-1);
    cout<<"\n after qs :";
    dispaly(arr,len);
}
