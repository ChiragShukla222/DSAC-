#include<iostream>
using namespace std ;

void sorting(int arr[], int low , int mid , int high){

    int i = low ;
    int j = mid+1;
    int k= low;
    int abe[5];

    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
          abe[k] =arr[i];
            i++;

        }
        else{
            abe[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid){
            abe[k] =arr[i];
            i++;
    k++;

    }
    while(j<=high){
        abe[k] = arr[j];
        j++;
        k++;
    }

    for(int i = low ;i< high ; i++){
        arr[i] = abe[i];
    }


}
void merg (int arr[] , int low , int high){

        if(low <high){

            int mid = (low + high)/2;
            merg(arr,low,mid);
            merg(arr,mid+1,high);

            sorting(arr,low,mid,high);

        }
}


void display(int arr[] ,int len){
        for(int i = 0 ; i < len ;i++){
            cout<<arr[i]<<"\t";
        }
}
int main(){
    int arr[] = {56,52,41,30,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"merge sorting \n";
    display(arr,len);
    merg(arr,0,len-1);
    cout<<"\n after \n";
      display(arr,len);
}
