#include<iostream>
#include<stack>
using namespace std ;
int main(){
    string s  = "jee far jeee";
    stack<string>st;
    for(int i = 0 ; i < s.length() ; i++){
                st.push(s[i]);
                //cout<<s[i];
    }
}
