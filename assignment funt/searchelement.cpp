#include<iostream>
using namespace std ;
int main(){
    int arr[] = {7,8,12,56,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int n ;

    cout<<"og array are:";
    for(int i = 0 ; i < len ;i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n enter the nubmer to find in array";
    cin>>n;
    for(int i = 0 ; i < len ;i++){
        if(arr[i]==n){
            cout<<"element is present";
        }
        else{
            cout<<"\n bmb";
            break;
        }
    }

}
