#include<iostream>
using namespace std ;

int main(){

int arr[] = {7,2,2,13,1,3,3,5,5,9,9};
int len = sizeof(arr)/sizeof(arr[0]);
int tmp , flag ;
cout<<"number coming more than one time are :";
for(int i = 0 ; i < len  ;i++){
    for(int j = i+1 ; j < len-1 ; j++){
        if(arr[i]==arr[j]){
           tmp = arr[i];
           cout<<tmp;
           break;
        }

    }



}


//cout<<"\n nubmer of time occurred"<<flag;

}
