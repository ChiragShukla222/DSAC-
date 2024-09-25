#include<iostream>
using namespace std ;
int qs(int arr[] , int low , int high){
    int temp ;

    int pivot = arr[low] ;
    int r = high;
    int l = low+1 ;
    do{
        while(arr[l]<pivot){
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

        temp = arr[r];
        arr[r]=arr[low];
        arr[low]=temp;
        return r;


}
int partit(int arr[], int low , int high){
    if(low<high){
    int pivot = qs(arr,low,high);
    partit(arr,low,pivot-1);
    partit(arr,pivot+1,high);
    }
}
void dispaly(int arr[] , int len){

    for(int i = 0 ; i < len  ; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[5] ={8,2,4,3,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"before qs";
    dispaly(arr,len);
    partit(arr,0,len-1);
    cout<<"\n after qs :";
    dispaly(arr,len);
}
