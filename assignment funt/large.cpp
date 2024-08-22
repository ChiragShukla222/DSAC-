#include<iostream>
using namespace std ;
int high=INT_MIN;
int tmp;
int large(int arr[] , int n ){
        for(int i = 0 ; i < n ; i++){
            if(arr[i]>=high){
                high = arr[i];
            }
        }
        return high ;

}
void display(int arr[],int n){
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int arr [5] ={45,22,100,36,56};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"before \n";
    display(arr,len);
    cout<<"\n after \n";
    cout<<large(arr,len);


}


