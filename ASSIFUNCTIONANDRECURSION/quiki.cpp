#include<iostream>
using namespace std ;

int part(int arr[], int low , int high){
        int pivot = arr[low] ;
        int l = low + 1;
        int r = high ;

    do{
        while(arr[l]<=pivot){
            l++;
        }
        while(arr[r]>pivot){
            r--;

        }
        if(l<r){

            int tmp = arr[r];
            arr[r] = arr[l];
            arr[l] = tmp ;
        }
    }while(l<r);

    int tmp = arr[low];
    arr[low] = arr[r];
    arr[r]=tmp;

    return r;

}

void quiki (int arr [] , int low  , int high){
          if(low<high){
            int pivot  = part(arr,low,high);
            quiki(arr,0,pivot-1);
            quiki(arr,pivot+1,high);
          }

}

void display(int arr[] ,int len){
    for(int i = 0; i < len  ;i++){

        cout<<arr[i]<<"\t";
    }
}

int main(){
    int arr[] ={14,52,63,89,2,1,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"before quick sort \n";
    display(arr,len);
    quiki(arr,0,len-1);
    cout<<"\n after quick sort \n";
    display(arr,len);


}
