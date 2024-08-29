#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<pair<int , string>>vec;
    int rno , n ;
    string name ;
    cout<<"enter the number of recss";
    cin>>n;
    for(int i = 0 ; i < n ;i++){

    cout<<"enter the roll no \n";
    cin>>rno;
    cout<<"name";
    cin>>name;
    vec.push_back({rno , name});
    }
    cout<<"stored data is :";
    for(int i  = 0 ; i <vec.size() ; i++){
         cout<<vec[i].first<<"\t"<<vec[i].second<<"\n";
    }

}
