#include<iostream>
#include<array>
using namespace std ;
int main(){
    array<int , 5>arr{6,5,2,7,1};
    cout<<"first is"<<arr.front()<<"\n";
    cout<<"last is"<<arr.back();
    int temp;
    temp = arr.front();
    arr.front()=arr.back();
    arr.back()=temp;
    cout<<"\n";

    cout<<"after swapping :"<<arr.back()<<"\t"<<arr.front()<<"\n";
    for(int i = 0 ;  i< 5;i++){
        cout<<arr.at(i);
    }
}
