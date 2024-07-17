#include<iostream>
using namespace std ;
int main() {
        int arr[] = {4,9,2,33,5};
        int len = sizeof(arr)/sizeof(arr[0]);
        cout<<"Before selection sort";
        for(int i =0 ; i < len  ; i++){
            cout<<arr[i]<<"\t";
        }
        for(int c = 0 ; c < len ; c++){
            int chotu = c ;
            for(int d = c+1 ; d < len ; d++){

                if(arr[chotu]>arr[d]){
                chotu =d;
            }
            }

            if(chotu!=c){
            int tmp = arr[chotu];
            arr[chotu]=arr[c];
            arr[c]=tmp;
        }
        }

        cout<<"\n after selection sort"<<"\t";
        for(int i = 0 ; i < len  ;i++){
            cout<<arr[i]<<"\t";
        }

}
