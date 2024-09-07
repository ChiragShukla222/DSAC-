#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
        vector<int>vec{1,2,3,5,0,6,7,4};

        int len = vec.size();
        sort(vec.begin() , vec.end() );
        cout<<"after sorting";
        for(auto i : vec){
            cout<<i<<"\t";
        }
        cout<<"\n";
            vector<int>::iterator yo = vec.begin();
       int series = len *(len +1)/2;
                    int sum = 0 ;
                    int temp = 0 ;
                    for(int i = 0 ; i < len  ;i++){
                            if(vec[i]==vec[i+1]){
                               cout<<"repeation of number is not allowed :";
                               break;

                            }

                            else{
                                sum = sum +vec[i] ;
                            }
                    }
                    temp = series-sum;
                    cout<<"missing number :"<<temp;
                    for(int i = 0 ; i < len ; i++){

                        if(temp==vec[i]){
                            cout<<"\n true";
                            return 1 ;

                        }
                        else{
                            cout<<"\n false";
                            return 0;
                        }
                    }




}
