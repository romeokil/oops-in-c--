// dekho single level inheritance
#include<iostream>
using namespace std;
class Animal{
    public:
        void speak(){
            cout<<"Animal sound "<<endl;
        }
};
class Dog:public Animal{
    public:
        void sound(){
            cout<<"Dog sound "<<endl;
        }
};
int main(){
    Dog d;
    d.sound();
    d.speak();
    return 0;
}