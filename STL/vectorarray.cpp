#include<iostream>
using namespace std;
#include<vector>
#include<iterator>

int main(){
    vector<int>arr;
    arr.push_back(122);
    arr.push_back(55);
    arr.push_back(34);
    arr.push_back(44);
    arr.push_back(4);
    arr.pop_back();
    arr.pop_back();
    cout<<"size of array : "<<arr.size()<<"\n";
    cout<<"capacity : "<<arr.capacity()<<"\n";

    for(auto i : arr){
        cout<<i<<"\t";
    }
    //to insert any element btw the array
    vector<int>::iterator p = arr.begin();
    cout<<"\n"<<*p+1;
    cout<<*(p+1);
    cout<<"\n insert \n";
    arr.insert(p+2,12);
    arr.insert(p+2,{7,5,6,12});

    for(auto i : arr){
        cout<<i<<"\t";
    }

}
