#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{2,3,44,56,78};
    vector<int>brr{4,7,45,9,2};
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    for(auto i : arr){
        cout<<i<<"\t";
    }
    cout<<"\n";
        for(auto j : brr){
            cout<<j<<"\t";
        }

        vector<int>::iterator it = arr.begin();
        cout<<"merged array is : ";
      arr.insert(arr.begin(),brr.begin(),brr.end());
            for(auto j : arr){
                cout<<j<<"\t";
            }
}
