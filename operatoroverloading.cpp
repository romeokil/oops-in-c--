// Compile time polymorphism me operator overloading aata hai.
#include<iostream>
using namespace std;
class Complex{
    private:
        int real,imag;
    public:
        Complex(){
            real=0;
            imag=0;
        }
        Complex(int r,int i){
            real=r;
            imag=i;
        }
        Complex operator+(Complex& obj){
            // Complex temp;
            // temp.real=real+obj.real;
            // temp.imag=imag+obj.imag;
            // return temp;
            return Complex(real+obj.real,imag+obj.imag); // ya toh aisa bhl likh skta hai.
            // or tm hm isse apna user defined type ka bhi addition krwa diye
            // but aise normally toh ni kr skte hai.
        }
        void print(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
};
int main(){
    Complex c1(2,3),c2(3,4);
    Complex c3;
    c3=c1+c2;
    c3.print();
    return 0;
}