#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    stack<int>st;
    vector<int>kl{7,8,5,2,30};
    sort(kl.begin(),kl.end());
    auto o = std::min_element(kl.begin(),kl.end());
        cout<<"min element is :"<<*o<<"\n";
    for(auto i : kl){
        cout<<i<<"\t";

    }

    st.push(8);
    st.push(9);
    //cout<<st.top();

}
