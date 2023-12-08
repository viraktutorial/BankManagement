#pragma once
#include <iostream>
#include "BankAccount.cpp"
#include "BankManager.cpp"
using namespace std;

class Application{
    private:
        BankManager bm;
    public:
        void run(){
             int choice;
            do{
                cout<<"Menu"<<endl;
                cout<<"1. Create a new account"<<endl;
                cout<<"2. View all accounts"<<endl;
                cout<<"Enter choice: ";
                cin>>choice;
                switch (choice)
                {
                    case 1:{
                        int num;
                        string name;
                        double balance;
                        cout<<"Enter number:";
                        cin>>num;
                        cout<<"Enter name:";
                        cin>>name;
                        cout<<"Enter balance";
                        cin>>balance;
                        BankAccount ba(num,name,balance);
                        bm.addBankAccount(ba);
                        break;
                    }
                    case 2:
                        cout<<"View all accounts"<<endl;
                        bm.viewBankAccount();
                    default:
                        break;
                }
            }while(choice!=0);
        }
};