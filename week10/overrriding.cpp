#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating meat"<<endl;
    }
};

class Human : public Animal{
    // public:
    // void eat(){
    //     cout<<"Eating cooked food"<<endl;
    // }
};

class Vegetarian : public Human{
    // public:
    // void eat(){
    //     cout<<"Eating vegetables"<<endl;
    // }
};

int main(){
    Animal a;
    a.eat();
    Human h;
    h.eat();
    Vegetarian v;
    v.eat();
    return 0;
}