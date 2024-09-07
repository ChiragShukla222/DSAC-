#include<iostream>
using namespace std ;
 class xcv {
    public:virtual void loan();
    void msg(){
        cout<<"rbi \n";
    }

 };
 class axis:public xcv{
        public : void loan(){
        cout<<"sbii \n";
        }
        void show(){
        cout<<"axis ane";
        }
    };
 int main(){
    xcv *m;
    m->msg();
    axis l;
    m=&l;
    l.loan();

 }
