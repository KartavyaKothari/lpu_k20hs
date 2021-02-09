#include<bits/stdc++.h>
using namespace std;

class Person{
    string name;
    int age;
    
    public:
    static string species;

    Person(string n, int a){
        name = n;
        age = a;
    }

    void introduce(){
        cout<<"Hi, my name is "<<name<<" and I am "<<age<<" years old and I am a "<<species<<endl;
    }
};

string Person::species = "homo sapiens";

int main(){
    Person *person1 = new Person("Kartavya",23);
    Person *person2 = new Person("Tarun",17);
    Person *person3 = new Person("Abhinay",21);
    // person1.name = "Kartavya";
    // person1.age = 23;

    person1->introduce();
    Person::species = "koala sapeins";
    person2->introduce();
    person3->introduce();
    
    return 0;
}