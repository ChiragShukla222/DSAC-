#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std ;
void abv(string &s){
    stack<char>st;
    stack<char>ts;
    for(int i = 0 ; i < s.length();i++){
            st.push(s[i]);
    }



    while(!st.empty()){
        ts.push(st.top());
        cout<<st.top()<<"\t";
        st.pop();
    }
    cout<<"\n";
    while(!ts.empty()){

        cout<<ts.top();
        ts.pop();
    }


}
int main(){
    string s = "sky is Blue";
   // cout<<"given string is :"<<s;
    abv(s);
}
