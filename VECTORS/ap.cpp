#include<iostream>
#include<vector>
using namespace std ;
int ap(vector<int>a ,int  len){
        int m , k;
        k = len ;
        m = k*(k+1)/2;
        int sum = 0;
        for(int i = 0 ; i < len ;i++){
            sum = sum +a[i];
        }
        return m - sum ;
}
int main(){

    vector<int>l{0,1,2,3,4};
    int n = l.size();
    cout<<ap(l,n);


}
