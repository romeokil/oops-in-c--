// mummy papa child wala
// mummy papa se child me ye ye property aa gy
#include<iostream>
using namespace std;
class Mom{
    public:
        void intelligent(){
            cout<<"Intelligent property inherited fron mom"<<endl;
        }
};
class Dad{
    public:
        void hardworking(){
            cout<<"Hardworking property inherited from dad"<<endl;
        }
};
class Child:public Dad,public Mom{
    public:
        void optimistic(){
            cout<<"Optimistic inbuilt property"<<endl;
        }
};
int main(){
    Child c;
    c.optimistic();
    c.hardworking();
    c.intelligent();
    return 0;
}