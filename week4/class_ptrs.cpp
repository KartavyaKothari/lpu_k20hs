#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(){
        name = "Kartavya";
        age = 24;
    }

    Person(string n, int a){
        name = n;
        age = a;
    }

    void introduce(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){
    Person p;
    Person *ptr = &p;

    p.introduce();
    ptr->introduce();
    
    Person *ptr2 = new Person("Chirag",21);
    ptr2->introduce();

    return 0;
}