#include<iostream>
#include<tuple>
#include<vector>
using namespace std ;
int main(){
    vector<tuple<int,int,string,bool>>vtup;
    int rn , m ;
    int n ;
    string name;
    bool l;
    cout<<"enter the recs of the students \n";
    cin>>n;
    for(int i = 0 ; i < n ; i++){
            cout<<"enter the rno"<<"\n";
            cin>>rn;
                cout<<"enter the name"<<"\n";
            cin>>name;
            cout<<"marks"<<"\n";
            cin>>m;
            cout<<"pass or fail"<<"\n";
            cin>>l;
            vtup.push_back({rn,m,name,l});
    }
    for(int i = 0 ;i<n ;i++){
        cout<<get<0>(vtup[i])<<"\t";
        cout<<get<1>(vtup[i])<<"\t";
        cout<<get<2>(vtup[i])<<"\t";
        cout<<get<3>(vtup[i])<<"\n";
    }
}
