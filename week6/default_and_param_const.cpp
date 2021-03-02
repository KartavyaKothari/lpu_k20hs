#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    Person(){
        cout<<"Default constructor called"<<endl;
    }
    Person(string name, int age){
        cout<<"Param cons 1 called, name = "<<name;
        cout<<" age = "<<age<<endl;
    }
    Person(string name){
        cout<<"Param cons 2 called, name = "<<name<<endl;
    }
    Person(int age){
        cout<<"Param cons 3 called, age = "<<age<<endl;
    }
};

int main (){
    Person p1;
    // Person p1 = Person();
    Person p2("Kartavya",21);
    Person p3("Kartavya");
    Person p4(21);

    // Person *p1 = new Person();
    // Person *p2 = new Person("Kartavya",21);
    // Person *p3 = new Person("Kartavya");
    // Person *p4 = new Person(21);
    return 0;
}