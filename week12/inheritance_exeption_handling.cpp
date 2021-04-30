#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    Base(){cout<<"Cons Base"<<endl;}
    ~Base(){cout<<"Des Base"<<endl;}
};

class Derived: public Base{
    public:
    Derived(){cout<<"Cons Derived"<<endl;}
    ~Derived(){cout<<"Des Derived"<<endl;}
};

int main(){
    try{
        Derived d;
        throw 12;
    }catch(...){
        cout<<"All caught"<<endl;
    }

    return 0;
}