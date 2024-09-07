#include<iostream>
#include<array>
#include<algorithm>
using namespace std ;
int main(){
    array<int,3>suv{1122,3366};
    array<int,3>arr{234,908};

   cout<<"swapped \n";
    suv.swap(arr);
   for(int  i= 0 ; i <3 ; i++){
    cout<<suv.at(i)<<"\t";
   }


}
