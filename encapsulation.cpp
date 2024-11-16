// whi banking wala example
#include<iostream>
using namespace std;
class Bank{
    private:
        int balance;
    public:
        Bank(){
            balance=0;
        }
        void deposit(int amount){
            if(amount>0){
                balance+=amount;
                cout<<"Amount to be deposited: "<<amount<<endl;
                cout<<"Available balance: "<<balance<<endl;
            }
            else {
                cout<<"Negative or 0 amount cant be added"<<endl;
            }
        }
        void withdraw(int amount){
            if(amount<=balance){
                cout<<"Amount to be withdrawn"<<amount<<endl;
                balance-=amount;
                cout<<"Available balance: "<<balance<<endl;
            }
            else{
                cout<<"Insufficient balance "<<endl;
            }
        }
        void checkBalance(){
            cout<<"Available balance : "<<balance<<endl;
        }
};
int main(){
    Bank b;
    b.deposit(500);
    b.withdraw(1000);
    b.withdraw(100);
    b.checkBalance();
    return 0;
}