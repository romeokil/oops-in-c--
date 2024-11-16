#include<iostream>
using namespace std;
class Shape{
    public:
        virtual void draw();
        void display(){
            cout<<"This is Shape class"<<endl;
        }
};
class Rectangle:public Shape{
    public:
        void draw(){
            cout<<"This is Rectangle Shape"<<endl;
        }
};
class Circle:public Shape{
    public:
        void draw(){
            cout<<"This is Circle Shape"<<endl;
        }
};
int main(){
    Shape *shape1;
    Shape *shape2;
    Rectangle rectangle;
    Circle circle;
    shape1=&rectangle;
    shape2=&circle;
    shape1->draw();
    shape2->draw();
    shape1->display();
    shape2->display();
    return 0;
}