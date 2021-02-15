#include <bits/stdc++.h>
using namespace std;

class Citizen{
    string name;
    int age;

    protected:
    int balance;

    public:
    Citizen(string n, int a, int b):
        name(n),age(a),balance(b)
    {}

    void introduce(){
        cout<<"Hi I am "<<name<<endl;
    }

    friend class Government;
};

class Government{
    public:
    void hackerman(Citizen c){
        cout<<"Our records show that you are "<<c.name;
        cout<<" and you have "<<c.balance<<" money in the bank"<<endl;
    }
};

int main() {
	Citizen c("Kartavya", 23, 10000000);
    Citizen c2("Deep", 19, 10);
    Government g;

    g.hackerman(c);
    g.hackerman(c2);
    
	return 0;
}