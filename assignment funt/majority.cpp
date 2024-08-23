//{2,2,3,3,3} ans = 3
#include<iostream>
using namespace std ;
int main(){
    int arr [] = {1,1,2,2,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < len ; i++){
            for(int j = i+1 ; j < len ; j++){
                if(arr[i]==arr[j]){
                    flag++;
                }
            }

    }
}
