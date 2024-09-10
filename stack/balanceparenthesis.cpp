#include<iostream>
using namespace std ;
#include<stack>
#include<algorithm>
bool valid(string &s){

    int len = s.length();
    stack<char>stk;
    bool ans = true ;
    for(int i = 0 ; i < len ; i++){
        if(s[i]=='{'|| s[i]=='[' || s[i]=='('){
            stk.push(s[i]);
           }
           else if(s[i]=='}'){
            if(!stk.empty()&&stk.top()=='{'){
                stk.pop();
            }
            else{
                ans = false;
                break;
            }
           }
        else if(s[i]==']'){
            if(!stk.empty()&&stk.top()=='['){
                stk.pop();
            }
            else{
                ans = false ;
                break;
            }
        }
        else if(s[i]==')'){
            if(!stk.empty()&&stk.top()=='('){
                stk.pop();
            }
            else{
                ans = false ;
                break;
            }
        }
    }
  return ans;


}
int main(){
string s="{[()]}";
bool c =  valid( s);
if(c){
    cout<<"balance";
}
else{
    cout<<"not balanced";
}
}
