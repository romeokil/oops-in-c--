// esme pointer wala concept lagna chahiye 
// and hmlog base class wala display function ko call krna hai and derived class wala display
// function call hona chahiye.
// and agr pointer waala approach lagae tbhi agr virtual keyword ni likhe toh kaam ni bnega 
// wo base class ka display func ko call kr dega eslie virtual bhi likhna jaruri hai.
#include<iostream>
using namespace std;
class Base{
    public:
        virtual void display(){
            cout<<"This is base class display function"<<endl;
        }
};
class Derived:public Base{
    public:
    // Overriding the base class display function
        void display(){
            cout<<"This is derived class display function"<<endl;
        }
};
int main(){
    Base *b;
    Derived d;
    b=&d;
    b->display();
    return 0;
}