#include<iostream>
using namespace std;

// constructor ke baaare me padhege chizon initialize krne me help krte hai.
class A{
    public:
    int length;
    A(){
        cout<<"Default constructor called"<<endl;
    }
    A(int l){
        length=l;
        cout<<"Parameterized constructor called"<<endl;
        cout<<"length is :"<<length<<endl;
    }
    A(A& obj){
        length=obj.length;
        cout<<"Copy constructor called"<<endl;
        cout<<"length is :"<<length<<endl;
    }
    A(A&& obj1){
        length=obj1.length;
        // ownership transfer kr dete hai jiske wajah se dekho hmlog jo bhi object aa rha hai
        // usko hmlog aaram se uska length 0 se initialize kr de rhe hai.
        obj1.length=0;
        cout<<"Move constructor called"<<endl;
        cout<<"length is :"<<length<<endl;
    }
};
int main(){
    A a;
    A a1(20);
    A a2=a1; // A a2(a) can be written as this also
    A a3=move(a2);
    cout<<"Length for a2 object after transferring ownership to a3 "<<a2.length<<endl;
    cout<<"Length for a3 obj "<<a3.length<<endl;
    return 0;
}