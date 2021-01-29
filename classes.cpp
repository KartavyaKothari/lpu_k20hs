#include<bits/stdc++.h>
using namespace std;

// Procedural paradigm
// Object oreinted paradigm

// private
// public
// protected

class Person{
    string name;
    int age;
    
    public:
    Person(string n, int a){
        name = n;
        age = a;
    }

    void introduce(){
        cout<<"Hi, my name is "<<name<<" and I am "<<age<<" years old"<<endl;
    }
};

int main(){
    Person *person1 = new Person("Kartavya",23);
    Person *person2 = new Person("Tarun",20);
    Person *person3 = new Person("Abhinay",21);
    // person1.name = "Kartavya";
    // person1.age = 23;

    person1->introduce();
    person2->introduce();
    person3->introduce();

    return 0;
}