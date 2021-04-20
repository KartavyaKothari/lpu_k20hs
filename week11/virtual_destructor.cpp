#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"C of A"<<endl;
    }
    virtual ~A(){
        cout<<"D of A"<<endl;
    }
};

class B:public A{
    public:
    B(){
        cout<<"C of B"<<endl;
    }
    ~B(){
        cout<<"D of B"<<endl;
    }
};

int main(){
    // B b;
    A *a = new B();

    delete a;
    return 0;
}