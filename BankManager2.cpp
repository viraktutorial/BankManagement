#pragma once
#include <iostream>
#include "BankAccount.cpp"
using namespace std;
using namespace ba;

class BankManager{
    private:
        BankAccount accounts[100];
        int count;
    public:
        BankManager(){
            count=0;
        }
        void addBankAccount(BankAccount ba){
            accounts[count++]=ba;
        }
        void viewBankAccount(){
            for(int i=0;i<count;i++){
                //cout<<accounts[i]<<endl;
                cout<<accounts[i].toString()<<endl;
            }
        }
        

};