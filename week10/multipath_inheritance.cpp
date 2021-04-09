#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
};

class B : virtual public A{
    public:
    int b;
};

class C : virtual public A{
    public:
    int c;
};

class D : public B, public C{
    public:
    int d;
};

int main(){
    D obj_d;
    obj_d.a = 10;
    obj_d.C::a = 10;
    obj_d.B::a = 100000;

    cout<<obj_d.B::a<<" "<<obj_d.C::a<<endl;
    return 0;
}