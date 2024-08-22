#include<iostream>
using namespace std ;
int lev ,val;
int countStep(char *arr , int n){
        for(int i = 0 ; i < n ; i++){
            if(arr[i]=='U'){
            lev++;
        }
        else if(arr[i]=='D'){
            if(lev==1){
                val++;
            }
            lev--;
        }
        }
        return val;
}
int main(){
    int m;
    cin>>m;
    char arr[m];
    int ans ;
    for(int i = 0 ; i <m ; i++){
        cin>>arr[m];
    }
    cout<<countStep;
}
