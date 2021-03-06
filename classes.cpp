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

    void is_adult();
};

void Person::is_adult(){
    if(age>18){
        cout<<"Person is adult"<<endl;
    }else{
        cout<<"Person is minor"<<endl;
    }
}

int main(){
    Person *person1 = new Person("Kartavya",23);
    Person *person2 = new Person("Tarun",17);
    Person *person3 = new Person("Abhinay",21);
    // person1.name = "Kartavya";
    // person1.age = 23;

    person1->introduce();
    person2->introduce();
    person3->introduce();

    person1->is_adult();
    person2->is_adult();
    person3->is_adult();
    
    return 0;
}