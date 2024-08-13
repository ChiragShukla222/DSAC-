#include<iostream>
using namespace std ;
int chotu ;
void sel(int arr[] ,int len){

        for(int i = 0 ; i < len ;i++){
            chotu = i ;

            for(int j = i+1 ; j < len ;j++){
                if(arr[chotu]>=arr[j]){
                    chotu = j;
                }
            }

            if(chotu!=i){
                int tmp=arr[i];
                arr[i] = arr[chotu];
                arr[chotu] =tmp;
            }
        }


}


void display(int arr[] , int len){

        for(int i=0;i <len; i++){
            cout<<arr[i]<<"\t";
        }
}
int main(){
    int arr[] = {45,85,01,236,96};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"before selection sort \n";
    display(arr,len);
    sel(arr,len);
    cout<<"\n after selection sort \n";
    display(arr,len);



}
