#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

int main(){
    Person p;
    p.name = "Kartavya";
    p.age = 24;

    Person *ptr = &p;
    cout<<ptr->name<<" "<<ptr->age;
    return 0;
}