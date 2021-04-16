#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void print() = 0;
};

class B : public A{
    public:
    void print(){
        cout<<"Printing from Derived"<<endl;
    }
};

class C: public B{
    public:
    
};

int main(){
    A *obj = new C;

    obj->print();
    // obj->show();

    return 0;
}