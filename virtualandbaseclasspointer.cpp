// ye virtual and base class pointer runtime polymorphism ke andr aata hai.
#include<iostream>
using namespace std;
class Animal{
    public:
        virtual void display(){
            cout<<"This is base class display function"<<endl;
        }
};
class Dog:public Animal{
    public:
        void display(){
            cout<<"This is Dog class display function"<<endl;
        }
};
class Cat:public Animal{
    public:
        void display(){
            cout<<"This is Cat class display function"<<endl;
        }
};
int main(){
    Animal *animal;
    Dog d;
    Cat c;
    animal=&d;
    animal->display();
    animal=&c;
    animal->display();
    return 0;
}