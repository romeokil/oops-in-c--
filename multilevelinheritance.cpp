#include<iostream>
using namespace std;
class Animal{
    public:
        void speak(){
            cout<<"This is Animal sound"<<endl;
        }
};
class Dog:public Animal{
    public:
        void bark(){
            cout<<"This is Dog sound"<<endl;
        }
};
class GermanSphered:public Dog{
    public:
        void sound(){
            cout<<"This is German Sphered sound"<<endl;
        }
};
int main(){
    GermanSphered g;
    g.sound();
    g.bark();
    g.speak();
    return 0;
}