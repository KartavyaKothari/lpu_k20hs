#include <bits/stdc++.h>
using namespace std;

class Bank{
    string name;
    int balance;

    public:
    Bank(string n, int b){
        balance = b;
        name = n;
    }

    void check_bal(){
        cout<<"You have "<<balance<<" rupess"<<endl;
    }

    friend void backdoor(Bank);    
};

void backdoor(Bank b){
    cout<<"Balance is "<<b.balance<<endl;
}

int main() {
	Bank c("Kartavya", 1);
    Bank c2("Deep", 100000000);

    backdoor(c);
    backdoor(c2);
    
	return 0;
}