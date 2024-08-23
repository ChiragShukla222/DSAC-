#include<iostream>
using namespace std ;
int main(){

    int arr[][2]={{1,2},{6,5},{2,1},{7,9},{9,7}};
    int len  = sizeof(arr)/sizeof(arr[0]);

    cout<<"pairs are :\n";

    for(int i =0 ; i < len ;i++){
        for(int j=i+1 ; j < len ;j++){

            if(arr[i][0]==arr[j][1]&&arr[i][1]==arr[j][0]){
                cout<<arr[i][0]<<"\&"<<arr[i][1]<<"\n";
            }
        }
    }


}
