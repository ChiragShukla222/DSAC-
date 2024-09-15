#include<iostream>
#include<stack>
using namespace std;

bool valid(string s){
    stack<char>stk;
    bool ans = true;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i]=='{'||s[i]=='['||s[i]=='('){
            stk.push (s[i]);
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
            ans = false;
            break;
        }
        }
        else if(s[i]==')'){
            if(!stk.empty()&&stk.top()==')'){
                stk.pop();
            }
            else{
            ans = false;
            break;
                }
        }
    }
    return ans;
}


int main(){
    string s = "{[()]}";
    bool c = valid(s);
    if(c){
        cout<<"valid";
    }
    else{
        cout<<"not valid ";
    }
}
