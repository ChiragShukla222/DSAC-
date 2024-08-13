#include<iostream>
using namespace std ;
int tmp ;
void selct(int arr[], int len ){

        for(int i = 0 ; i < len ; i++){
                    int chotu = i;
                    for(int j = i+1 ; j < len ; j++){
                        if(arr[chotu]>arr[j]){
                            chotu = j;

                        }
                    }
                    if(chotu!=i){
                        tmp = arr[chotu];
                        arr[chotu] = arr[i];
                        arr[i]=tmp;

                    }


        }


}


void display(int arr[] , int len ){
        for(int i = 0 ;  i <len ;i++){
            cout<<arr[i]<<"\t";
        }

}
int main(){
    int arr[] = {12,5,1,7,0,56};
    int len = sizeof(arr)/sizeof(arr[0]);
     cout<<"before selection sort \n";
    display(arr,len);
    selct(arr,len);
     cout<<"\n after selection sort \n";
     display(arr,len);

}
