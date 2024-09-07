#include<iostream>
using namespace std ;
#include<tuple>
#include<vector>
int main(){

    int n , rno ;
    string name ;
    bool t ;
    double per ;
    vector<tuple<int ,string , double , bool>>v;
    cout<<"enter the recs";
    cin>>n;
    //to enter the data in the tuple
    for(int i = 0 ; i < n ; i++){
        cout<<"enter the rollno \n";
        cin>>rno;
        cout<<"enter the name \n";
        cin>>name;
        cout<<"enter the %age \n";
        cin>>per;
        cout<<"false for fail and true for pass \n";
        cin>>t;
        v.push_back({rno,name,per,t});
    }
        //to display the data
        cout<<"inserted recs are :";
        for(int i = 0 ; i < n ; i++){
            cout<<get<0>(v[i])<<"\t";
            cout<<get<1>(v[i])<<"\n";
           cout<<get<2>(v[i])<<"\t";
            cout<<get<3>(v[i])<<"\n";
            //cout<<get<4>(v[i])<<"\t";
        }

}
