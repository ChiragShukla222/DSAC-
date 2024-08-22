#include<iostream>
using namespace std;
int mid(int arr[] , int low , int high){
    int midval = (low+high)/2;

    return arr[midval];
}
void display(int arr[], int ln){
for(int i = 0 ; i  < ln ; i++){
    cout<<arr[i]<<"\t";
}
}
int main(){
    int arr[] ={7,89,56,10,5,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    display(arr,len);
    cout<<"midvalue Is :"<<mid(arr,0,len);

}
