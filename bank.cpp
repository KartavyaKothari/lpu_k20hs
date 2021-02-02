#include<bits/stdc++.h>
using namespace std;

class Account{
    string pass;
    int balance;
    
    public:
    Account(string p){
        pass = p;
        balance = 100;
    }

    bool check_pass(string p){
        if(p==pass){
            return true;
        }else return false;
    }

    void check_balance(string p){
        if(check_pass(p)){
            cout<<"Your balance is "<<balance<<" rupees"<<endl;
        }else{
            cout<<"You are an imposter"<<endl;
        }
    }

    void add_money(string p,int amt){
        if(check_pass(p)){
            balance = balance + amt;
            cout<<"Your updated balance is "<<balance<<" rupees"<<endl;
        }else{
            cout<<"You are an imposter"<<endl;
        }
    }

    void withdraw_money(string p,int amt){
        if(check_pass(p)){
            if(balance>amt){
                balance = balance - amt;
                cout<<"Your updated balance is "<<balance<<" rupees"<<endl;
            }else{
                cout<<"Get a job man!"<<endl;
            }
        }else{
            cout<<"You are an imposter"<<endl;
        }
    }
};

int main(){
    // Add money
    // Check balance
    // Withdraw money

    Account p1("pass@123");
    
    p1.check_balance("pass@123");
    p1.add_money("pass@123",1000);
    p1.withdraw_money("pass@123",345);
    p1.withdraw_money("pass@123",1000000);
    p1.check_balance("pass@123");

    return 0;
}