#include<iostream>
using namespace std ;
//fuction
int front(int n ) {
        //base casee
        if(n==0){
            return 1 ;//sucess rate 1 fail 0
        }
        cout<<n<<"\t";//tail recursion
        front(n-1);//recursion relation
        cout<<n<<"\t";//head recursion
}
int main(){

        front(5);

}

