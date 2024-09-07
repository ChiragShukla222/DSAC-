#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<pair<int,string>>stu;
       int rno , n;
    string name;
    cout<<"enter the records you want to insert \n";
    cin>>n;
    for(int i = 0 ; i < n ;i++){
        cout<<"name \n";
        cin>>name;
        cout<<"roll-no : \n";
        cin>>rno;
        stu.push_back({rno , name});
    }
    for(int i = 0 ; i < n ;i++){
        cout<<stu[i].first<<"\t"<<stu[i].second<<"\n";
    }



}
