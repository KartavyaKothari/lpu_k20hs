#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void introduce(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){
    Person *ptr = new Person("Chirag",21);
    ptr->introduce();

    return 0;
}