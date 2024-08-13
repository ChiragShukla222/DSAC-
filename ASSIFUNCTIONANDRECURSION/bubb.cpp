#include<iostream>
using namespace std ;
int tmp;
int flag;
void sorting(int arr[] , int len){
        for(int i = 0 ; i < len ; i++){

            for(int j =0 ; j < len-i-1 ;j++){

                if(arr[j]>=arr[j+1]){
                        tmp = arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=tmp;
                        flag++;
                }
            }

        }
         if(flag==0){
                cout<<"sorted no need to sorrt more";
            }
}

void display(int arr[] ,int len){

    for(int i = 0 ; i< len ;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    display(arr,len);
    cout<<"before bubble sort \n";
    sorting(arr,len);
    display(arr,len);
    cout<<"\n after bubble sort \n";

}
