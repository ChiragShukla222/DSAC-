#include<iostream>
using namespace std ;

int fun(int b, int p){

    if(b==0){
        return 0;
    }
    else if(p==0){
        return 1;
    }

            int c = b*(p-1);
            return c;
}
int main(){
    int a , b;
    a=2;
    b=3;
    fun(a,b);
    cout<<fun(a,b);
}
