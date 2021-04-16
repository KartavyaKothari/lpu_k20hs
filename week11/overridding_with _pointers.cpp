#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void print(){
        cout<<"Printing from base"<<endl;
    }

    void show(){
        cout<<"Showing from base"<<endl;
    }
};

class B : public A{
    public:
    void print(){
        cout<<"Printing from Derived"<<endl;
    }

    void show(){
        cout<<"Showing from Derived"<<endl;
    }
};

int main(){
    A *obj = new B;

    obj->print();
    obj->show();

    return 0;
}