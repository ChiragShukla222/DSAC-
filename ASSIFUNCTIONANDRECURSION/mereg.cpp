#include<iostream>
using namespace std ;

void mereg(int arr[], int low , int mid ,int high){


            int i = low ;
            int j = mid + 1 ;
            int k = low;
            int abe[5];

            while(i<=mid && j<=high){

                    if(arr[i]<=arr[j]){
                        abe[k]=arr[i];
                        i++;
                    }
                    else{
                        abe[k] = arr[j];
                        j++;
                    }
                    k++;
            }

            while(i<=mid){
                abe[k] = arr[i];
                i++;
                k++;
            }
            while(j<=high){
                abe[k] =arr[j];
                j++;
                k++;
            }

            for(int l=low; l <=high ;l++){
                arr[l] =abe[l];
            }

}


void qs(int arr[] , int low  ,int high){
       if(low<high){
         int mid  = (low+high)/2;
        qs(arr,low,mid);
        qs(arr,mid+1,high);
        mereg(arr,low,mid,high);
       }
}

void display(int arr[] , int len){
    for(int i = 0 ; i < len ; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[] = {4,23,56,85,12};
    int len =  sizeof(arr)/sizeof(arr[0]);
    cout<<"before merge sort \n";
    display(arr,len);
    qs(arr,0,len-1);
    cout<<"\n after merge sort \n";
    display(arr,len);

}
