#include<iostream>
#include<queue>
#include<stack>
using namespace std ;

    void rev(queue<int>&q){
        stack<int>p;
        while(!q.empty()){
                p.push(q.front());
                q.pop();

        }
        while(!p.empty()){
                cout<<p.top()<<"\t";
                p.pop();

        }
    }

int main(){
    queue<int>q;
    q.push(5);
     q.push(9);
      q.push(2);
       q.push(8);
        q.push(4);
    rev(q);

}
