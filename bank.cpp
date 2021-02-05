#include<bits/stdc++.h>
using namespace std;

struct transact{
    bool is_deposit;
    int amt;
};

class Account{
    string pass;
    int balance;
    struct transact history[100];
    int last_transac;
    
    bool check_pass(){
        string p;
        cout<<"Enter password: ";
        cin>>p;
        if(p==pass){
            return true;
        }else{
            cout<<"You are an imposter"<<endl;
            return false;
        }
    }

    public:
    Account(string p){
        pass = p;
        balance = 100;
        last_transac = -1;
    }

    void change_pass(){
        if(!check_pass())
            return;

        cout<<"Enter new password: ";
        cin>>pass;
    }

    void check_balance(){
        if(!check_pass())
            return;
        
        cout<<"Your balance is "<<balance<<" rupees"<<endl;
    }

    void add_money(int amt){
        if(!check_pass())
            return;
        
        last_transac++;
        history[last_transac] = {true,amt};

        balance = balance + amt;
        cout<<"Your updated balance is "<<balance<<" rupees"<<endl;
    }

    void withdraw_money(int amt){
        if(!check_pass())
            return;

        if(balance>amt){
            last_transac++;
            history[last_transac] = {false,amt};
            
            balance = balance - amt;
            cout<<"Your updated balance is "<<balance<<" rupees"<<endl;
        }else{
            cout<<"Get a job man!"<<endl;
        }
    }

    void print_passbook(){
        if(!check_pass())
            return;

        cout<<"****************** Transaction history **********************"<<endl;
        for(int i = 0 ; i <= last_transac; i++){
            if(history[i].is_deposit){
                cout<<"You added "<<history[i].amt<<" rupees to your account"<<endl;
            }else{
                cout<<"You withdrew "<<history[i].amt<<" rupees from your account"<<endl;
            }
        }
        cout<<"*************************************************************"<<endl;
    }
};

int main(){
    // Add money
    // Check balance
    // Withdraw money
    // Change password
    // Transaction history
    
    // Give a interface and make it interactive
    Account p1("pass@123");
    bool is_continue = true;

    cout<<"****** Welcome to the koala reserve bank ******"<<endl;

    while(is_continue){
        cout<<"1. Add money"<<endl;
        cout<<"2. Withdraw money"<<endl;
        cout<<"3. Check balance"<<endl;
        cout<<"4. Print transaction history"<<endl;
        cout<<"5. Change password"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<endl<<"Choose your option: ";
        int res,amt;
        cin>>res;

        switch (res){
            case 1:
                cout<<"Enter amount: ";
                cin>>amt;
                cout<<endl;
                p1.add_money(amt);
                break;
            case 2:
                cout<<"Enter amount: ";
                cin>>amt;
                cout<<endl;
                p1.withdraw_money(amt);
                break;
            case 3:
                cout<<endl;
                p1.check_balance();
                break;
            case 4:
                cout<<endl;
                p1.print_passbook();
                break;
            case 5:
                cout<<endl;
                p1.change_pass();
                break;
            case 6:
                is_continue = false;
                break;
        }
    }
    
    return 0;
}