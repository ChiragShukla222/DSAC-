#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>kl{22,22,1};
    sort(kl.begin(),kl.end());
    int temp;
    int len = kl.size();
    for(int i = 0 ; i < len ;i++){
        if(kl[i]!=kl[i+1]){
            temp = kl[i];
        }
    }
    return temp ;

}
