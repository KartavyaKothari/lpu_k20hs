#include<bits/stdc++.h>
using namespace std;

class A{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};

class B:public A{
    // private:
    // int b;
    // int c;

    public:
    void print(){
        // cout<<a;
        cout<<b;
        cout<<c;
    }
};

class C:public B{
    public:
    void print2(){
        print();
        // // cout<<a;
        // cout<<b;
        // cout<<c;
    }
};

int main(){
    A obj1;
    cout<<obj1.c;

    B obj2;
    cout<<obj2.c;

    C obj3;
    cout<<obj3.c;

    return 0;
}