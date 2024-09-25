#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    stack<int>st;
    vector<int>kl;
    int x;
    int flag = 0;
    st.push(8);
    st.push(5);
    st.push(7);
    st.push(4);
    st.push(1);

    while(!st.empty()){
        x = st.top();
        st.pop();
        kl.push_back(x);
        flag++;
    }
    sort(kl.begin(),kl.end());
    cout<<kl[0];
    cout<<"number of elements "<<flag;


}
