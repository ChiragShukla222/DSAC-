#include<iostream>
using namespace std ;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int brr[3][3]={1,2,3,4,5,4,7,8,9};
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
                if(arr[i][j]!=brr[i][j]){
                    cout<<"not same";
                }
                else{
                    cout<<" same";
                }
          }
        }

    }



