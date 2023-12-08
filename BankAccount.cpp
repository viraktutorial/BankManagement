#pragma once
#include <iostream>
#include <sstream>
using namespace std;
namespace ba {
    
    class BankAccount {
    private:
    //data members
    int num;
    string name;
    double balance;

    public:
    //constructors
    BankAccount()  {
        this->num=0;
        this->name="unknwon";
        this->balance=0;
    };

    BankAccount(int num, string name, double balance) { 
        this->setNum(num);
        this->setName(name);
        this->setBalance(balance);
    };

    //getter and setter functions
    int getNum() const {
    return num;
    }
    string getName() const {
    return name;
    }
    double getBalance() const {
    return balance;
    }
    void setNum(const int num) {
        if(num>=0){
            this->num = num;
        }else{
            cout<<"Invalid number"<<endl;
        }
        
    }
    void setName(const string name) {
        if(!name.empty()){
            this->name = name;
        }else{
            cout<<"Invalid name"<<endl;
        }
        
    }
    void setBalance(const double balance) {
        if (balance>=0){
            this->balance = balance;
        }else{
            cout<<"Invalid balance"<<endl;   
        }
    }
    //function members
    void deposit(double amount) {
    if (amount > 0) {
        balance+=amount;
    }else{
        cout<<"Invalid amount"<<endl;
    }
    }
    void withdraw(double amount) {
    if (amount <= balance) {
        balance-=amount;
    }else{
        cout<<"Invalid amount"<<endl;
    }
    }
    void checkBalance() {
    cout << "Number: " << getNum() << " Name: " << getName() << " Balance: " << getBalance() << endl;
    }

    string toString(){
        stringstream ss;
        ss << "Number: " << getNum() << " Name: " << getName() << " Balance: " << getBalance() << endl;
        return ss.str();
    }

    friend ostream& operator<<(ostream& out, BankAccount& ba){
        out<<"Number: " << ba.getNum() << " Name: " << ba.getName() << " Balance: " << ba.getBalance() << endl;
        return out;
    }

    

    };
}
