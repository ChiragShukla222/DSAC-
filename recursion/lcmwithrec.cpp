#include<iostream>
using namespace std ;
int lcm(int a , int b){
       if(a==0&&b==0){
        return 0 ;
       }
       else {
        return 1 ;
       }

    int low = a>b?a:b;
    if(low%a==0&&low%b==0){
            low++;
        return lcm(low,0);

    }


}
int main(){
cout<<"lcm is :"<<lcm(4,12);
}
