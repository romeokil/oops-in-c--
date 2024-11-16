// Hybrid inheritance me yaad rkhna ki hmlog ko ambuiguity wala error aa skta hai
// qki hmlogo ke pass 2 raaata hai jaane ka toh usko smjh ni aata hai 
// but agr tm virtual keyword use kr lo toh wo ambuguity error ht jaega.
#include<iostream>
using namespace std;
class GrandParents{
    public:
        void Hardworking(){
            cout<<"Hardworking Property Inherited"<<endl;
        }
};
class Mom:virtual public GrandParents{
    public:
        void Intelligent(){
            cout<<"Intelligent Property Inherited"<<endl;
        }
};
class Dad:virtual public GrandParents{
    public:
        void Optimistic(){
            cout<<"Optimistic Property Inherited"<<endl;
        }
};
class Child:public Mom,public Dad{
    public:
        void Sporty(){
            cout<<"Default Property Inherited"<<endl;
        }
};
int main(){
    Child c;
    c.Sporty();
    c.Intelligent();
    c.Optimistic();
    c.Hardworking();
    return 0;
}