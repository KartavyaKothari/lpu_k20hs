#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    static int i;
    int id;
    Person(){
        id = ++i;
        cout<<"C"<<id<<endl;
    }
    ~Person(){
        cout<<"D"<<id<<endl;
    }
};

int Person::i = 10;

void foo(){
    Person p[3];
}

int main(){
    foo();
    cout<<"E"<<endl;
    return 0;
}