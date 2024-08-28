#include<iostream>
using namespace std ;
#include<vector>
int main(){
    vector<pair <int,string>>vec;
    int rollno , n ;
    string name ;
    cout<<"enter the size of array";
    cin>>n;
    for(int i =0 ; i < n ;i++){

        cout<<"rollno : ";
        cin>>rollno;

        cout<<"name : ";
        cin>>name;

        vec.push_back({rollno,name});
    }

    cout<<"stored data is \n";

    for(int i = 0 ;i <vec.size() ; i++){

            cout<<vec[i].first<<"\t"<<vec[i].second<<"\n";

    }


}

