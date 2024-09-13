#include<iostream>
using namespace std ;
int brr[5];
int ms(int arr[],int low , int mid , int high){
        int l = low;
        int j = mid+1;
        int k = low ;
        while(l<=mid&&j<=high){
            if(arr[l]<arr[j]){
                brr[k]=arr[l];
                l++;
            }
            else{
                brr[k]=arr[j];
                j++;
            }
            k++;
        }
        while( l<=mid){
            brr[k]=arr[l];
            l++;
            k++;
        }
        while(j<=high){
            brr[k]=arr[j];
            j++;
            k++;
        }
        for(int i = 0 ; i <=high ;i++){
          arr[i]=brr[i];
        }
}
int parti(int arr[],int low , int high){
        if(low<high){
            int mid = (low + high)/2;
           parti(arr,low,mid);
            parti(arr,mid+1,high);
            ms(arr,low,mid,high);

        }
}
void display(int arr[],int len){
    for(int i = 0 ; i < len ; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
        int arr[5]={7,8,2,35,4};
        int len = sizeof(arr)/sizeof(arr[0]);
        cout<<"before the ms ";
        display(arr,len);
            parti(arr,0,len-1);
        cout<<"\n after ms";

        display(arr,len);
}
