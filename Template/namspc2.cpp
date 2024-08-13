#include<iostream>
using namespace std ;
namespace cyb{
        //the object of this class cant be made directly it has to go to
        //cyb than to the class inside it
        class bhopal{
            int a , b ;
            public:void input(int x , int y){
                a=x;
                b=y;
            }
            void show(){

                cout<<"result="<<a+b;
            }
        };
        namespace cybrom2{
                void cybfun();
        }
        cout<<"cybrom 2 function \n";
}
        using namespace cyb;//with the help of this no need to apply the scope variable again and again
        int main()
        {
            bhopal obj ;
            obj.input(40,50);
            obj.show();
        }


//namespace is public and it's object are never made ,to acees the data make class ka obj using the methods mentions above
