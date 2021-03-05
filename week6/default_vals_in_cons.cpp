#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name = "Kartavya", int age = 18)
    {
        this->name = name;
        this->age = age;
    }
    
    void intro(){
        cout<<name<<" "<<age<<endl;
    }
};

int main (){
    Person p1;
    Person p2("Satya");
    Person p3("Rishi",24);
    p1.intro();
    p2.intro();
    p3.intro();

    return 0;
}