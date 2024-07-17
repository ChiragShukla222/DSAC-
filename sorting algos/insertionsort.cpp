#include<iostream>
using namespace std;
int main(){
        int arr[5]={6,3,4,2,1};
        int tmp ;
        int len = sizeof(arr)/sizeof(arr[0]);
        cout<<"before insertion sort \n";
        for(int i =0 ; i < len ;i++){
            cout<<arr[i]<<"\t";
        }
        for (int i = 1 ;i < len  ;i++){
            int mini =i ;
            while(mini>0){
                if(mini<len && arr[mini]<arr[mini-1]){
                    int tmp = arr[mini];
                    arr[mini]=arr[mini-1];
                    arr[mini-1] = tmp ;
                }
                  mini--;
            }

        }
        cout<<"after insertion sorting \n";
        for(int i =0 ; i < len ; i++){
            cout<<arr[i]<<"\t";
        }
}
