#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int arr[]={7,5,4,3,8,1};
    int sum = 0;
    int len  = sizeof(arr)/sizeof(arr[0]);
    cout<<"pairs with eqaul sum  are : \n";
    for(int  i = 0 ; i < len ; i++){
        for(int j = i+1 ; j< len ; j++){
            if(arr[i]+arr[j]==arr[j]+arr[i]){
                cout<<arr[i]<<"&"<<arr[j]<<"\t";
            }
        }
    }

}
