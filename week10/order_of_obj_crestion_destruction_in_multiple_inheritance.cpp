#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"A is created"<<endl;
    }
    ~A(){
        cout<<"A is destroyed"<<endl;
    }
};

class B{
    public:
    B(){
        cout<<"B is created"<<endl;
    }
    ~B(){
        cout<<"B is destroyed"<<endl;
    }
};

class C : public B, public A{
    public:
    C(){
        cout<<"C is created"<<endl;
        cout<<endl;
    }
    ~C(){
        cout<<"C is destroyed"<<endl;
    }
};

void func(){
    C obj_c;
}

int main(){
    func();
    return 0;
}