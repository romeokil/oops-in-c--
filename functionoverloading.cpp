// function overlading is a part of compile time polymorphism.
#include<iostream>
using namespace std;
class A{
    public:
        void show(int no){
            cout<<"Integer show function called!!"<<endl;
        }
        void show(string s){
            cout<<"String show function called!!"<<endl;
        }
        void show(double s){
            cout<<"Double show function called!!"<<endl;
        }
};
int main(){
    A a;
    a.show(1);
    a.show("rahul");
    a.show(4.0);

    return 0;
}