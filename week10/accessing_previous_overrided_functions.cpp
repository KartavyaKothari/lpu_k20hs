#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating meat"<<endl;
    }
};

class Human : public Animal{
    public:
    void eat(){
        // Animal::eat();
        cout<<"Eating cooked food"<<endl;
    }
};

class Vegetarian : public Human{
    public:
    void eat(){
        // Animal::eat();
        cout<<"Eating vegetables"<<endl;
    }
};

int main(){
    Animal a;
    a.eat();
    cout<<endl;
    Human h;
    h.Animal::eat();
    cout<<endl;
    Vegetarian v;
    v.eat();
    return 0;
}