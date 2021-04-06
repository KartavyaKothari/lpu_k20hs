#include<bits/stdc++.h>
using namespace std;

class Animal{
    string id;

    protected:
    void age(){
        cout<<"Animal is getting old"<<endl;
    }
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};

class Dog:public Animal{
    public:
    void live(){
        age();
    }
    void speak(){
        cout<<"Dog is barking"<<endl;
    }
};

int main(){
    Dog tommy;
    tommy.eat();
    tommy.speak();
    tommy.live();
    // Animal a;
    // a.eat();
    return 0;
}