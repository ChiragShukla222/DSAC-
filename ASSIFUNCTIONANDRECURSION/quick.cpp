#include<iostream>
using namespace std ;

 int store(int arr[] , int low ,int high){

     int pivot = arr[low] ;
      int l = low+1;
      int r = high ;
      int tmp;

        do{

            while(arr[l]<=pivot){
                l++;
            }
            while(arr[r]>pivot){
                r--;
            }
            if(l<r){

                tmp = arr[r] ;
                arr[r] =arr[l] ;
                arr[l] = tmp;
            }

        }
        while(l<=r);

        tmp = arr[r] ;
        arr[r] = arr[low] ;
        arr[low] = tmp;


      return r;

 }

 void quic(int arr[] , int low , int high){

           if(low<high){
             int pivot =  store(arr, low, high);
            quic(arr,low,pivot-1);
            quic(arr,pivot+1,high);
           }

 }


void display(int arr[] ,int len){

        for(int i = 0 ; i < len ; i++){
            cout<<arr[i]<<"\t";
        }
}

 int main(){

        int arr[] = {12,4,5,7,97,75};
        int len = sizeof(arr)/sizeof(arr[0]);
        cout<<"before qucik sort \n";
        display(arr,len);
        quic(arr,0,len-1);
        cout<<"\n after sort \n";
        display(arr,len);


 }




