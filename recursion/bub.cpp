#include<iostream>
using namespace std ;
int main(){
        int arr[] ={7,4,1,8,5};
        int len = sizeof(arr)/sizeof(arr[0]);
        int flag = 0;
        int tmp;
        cout<<"before bubble sort : \n";
        for(int i = 0 ; i < len ; i++){
            cout<<arr[i]<<"\t";
        }
        for(int i = 0 ; i < len ; i++){
            for(int j = 0 ; j < len-i -1 ;j++){
                if(arr[j]>arr[j+1]){
                        tmp =arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1] =tmp ;
                        flag++;
                }
            }

        }
        if(flag==0){
            cout<<"allready sorted array : \n";
        }
        cout<<"after bubble sort :\n";
        for(int i = 0 ; i < len ;i++){
            cout<<arr[i]<<"\t";
        }



}
