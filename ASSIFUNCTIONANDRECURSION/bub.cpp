#include<iostream>
using namespace std ;
int tmp ,flag;
void bub(int arr[] , int len){
        for(int i = 0 ; i < len ; i++){
            for(int j = 0 ; j<len-i-1 ;j++){
                if(arr[j]>arr[j+1]){
                    tmp = arr[j];
                    arr[j] =arr[j+1];
                    arr[j+1] =tmp ;
                }
            }
            flag++;
        }
        if(flag==0){
            cout<<"already sorted";
        }
}

void display(int arr[] , int len){
        for(int i = 0 ; i < len ; i++){
            cout<<arr[i]<<"\t";
        }
}
int main(){
        int arr[] = {42,12,3,78};
        int len = sizeof(arr)/sizeof(arr[0]);

        cout<<"before bubble sort \n ";
        display(arr,len);
         cout<<"\n after bubble sort \n";
         bub(arr,len);
        display(arr,len);

}
