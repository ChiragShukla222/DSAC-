#include<iostream>
#include<stack>
using namespace std ;
int main(){
    stack<int>jk ;

    jk.push(778);
     jk.push(77);
    //cout<<jk.top();
while(!jk.empty()){
    cout<<jk.top()<<"\n";
    jk.pop();
}


}
