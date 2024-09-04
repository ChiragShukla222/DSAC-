#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<vector<int>>v2;
    int r , c ,  value ;
    cout<<"enter the rows ";
    cin>>r;
    cout<<" \n enter the cols";
    cin>>c;
    cout<<"enter the "<<r*c<<"values";
    for(int row = 0 ; row  <r ;row++){
        vector<int>v1;
        for(int col = 0; col < c ; col++){
            cin>>value;
            v1.push_back(value);
        }
        v2.push_back(v1);
    }
    //display the vector

    cout<<"two d vec is : \n";
    for(int row = 0 ; row < r ;row++){

        for(int col = 0; col < c ;col++){
            cout<<v2[row][col]<<"\t";
        }
        cout<<"\n";
    }
    int src ;
    cout<<"enter the value to to searchjed";
    cin>>src;
    for(int row = 0 ; row < r ;row++){
        for(int col = 0; col < c ;c++){
            if(v2[row][col]==src){
                cout<<"found ";
                cout<<"["<<row<<"]"<<"["<<col<<"]";
                break;
            }
            else if(v2[row][col]!=src){
                cout<<"no data";
                break;
            }
        }
        cout<<"\n";
    }


}
