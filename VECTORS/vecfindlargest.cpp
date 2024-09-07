#include<iostream>
#include<tuple>
#include<vector>
using namespace std;
int main(){
    int n;
    string w;
    vector<tuple<string>>vec;
    cout<<"enter the number of words in the string";
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cout<<"enter words"<<"\n";
        cin>>w;
        vec.push_back(w);
    }
    cout<<"the string entered is :"<<"\t";
    for(int i =0 ; i < n ; i++){
        cout<<get<0>(vec[i])<<"\t";
        cout<<"\n";
        cout<<get<0>(vec[i]).size()<<"\t";

    }
    auto largest = get<0>(vec[0]);

for (int i = 0; i < n; i++) {
    if (get<0>(vec[i]).size() >= largest.size()) {
        largest = get<0>(vec[i]);
    }
}

cout <<"largest wass :"<<largest;







}
