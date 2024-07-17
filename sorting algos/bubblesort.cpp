//no of swaps
//code optimization
//
#include<iostream>
using namespace std ;
int main(){
        int arr[5] = {4,9,22,3,77};
        int len =sizeof(arr)/sizeof(arr[0]);
        int temp ;
        int flag = 0;
        cout<<"before sorting\n";
        for(int i = 0 ;i < len ; i++){
            cout<<arr[i]<<"\t";
        }
        for(int i = 0 ; i< len ;i++ ){
            for(int j = 0 ; j < len-i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1] = temp;
                    flag++;
                }

            }
            if(flag==0){
                    cout<<"already sorted \n";
                    break;
                }
        }
        cout<<"\n after sorting \n";
        for(int i = 0 ; i < len ;i++){
                cout<<arr[i]<<"\t";
        }

}
