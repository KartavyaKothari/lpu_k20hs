#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    // Person(){

    // }

    // Person(Person &p){
    //     name = p.name + p.name;
    //     age = p.age + p.age;
    // }
};

int main (){
    Person p1;
    p1.name = "Kartavya";
    p1.age = 24;

    Person p2(p1);

    cout<<p2.name<<" "<<p2.age<<endl;
    return 0;
}