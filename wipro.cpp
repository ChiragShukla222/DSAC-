#include<iostream>
#include<algorithm>
using namespace std ;
int sockMerchant(int arr[] , int n){

    int flag;
    if(n>=1&&n<=100){

        sort(arr , arr+n);

         for(int i = 0 ; i < n-1 ; i++){
            if(arr[i]==arr[i+1]){
                flag++;
                i++;
            }
         }
         return flag;


    }

}
void display(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[] ={10,20,10,20};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<"arr \n";
    display(arr,len);
    cout<<"\n nubmer of paus \n";
    cout<<sockMerchant(arr,len);




}
