#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(int a){
        cout<<"A is created with value "<<a<<endl;
    }
    ~A(){
        cout<<"A is destroyed"<<endl;
    }
};

class B : public A{
    public:
    B(int a, int b):A(a){
        cout<<"B is created with value "<<b<<endl;
    }
    ~B(){
        cout<<"B is destroyed"<<endl;
    }
};

class C : public B{
    public:
    C(int a, int b, int c):B(a,b){
        cout<<"C is created with value "<<c<<endl;
    }
    ~C(){
        cout<<"C is destroyed"<<endl;
    }
};

void func(){
    C obj_c(1,2,3);
}

int main(){
    func();
    return 0;
}