#include<iostream>
using namespace std;
class Mom{
    public:
        void quality(){
            cout<<"Intelligent Property Inherited"<<endl;
        }
};
class Child1:public Mom{
    public:
        void feature(){
            cout<<"Flexible and sporty nature"<<endl;
        }
};
class Child2:public Mom{
    public:
        void feature(){
            cout<<"Hardworking and optimistic in nature"<<endl;
        }
};
int main(){
    Child1 c1;
    c1.feature();
    c1.quality();
    Child2 c2;
    c2.feature();
    c2.quality();

    return 0;
}