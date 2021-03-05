#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    const string name;
    int &age;
    Person(string name, int &age):name(name),age(age)
    {}
    
    void intro(){
        cout<<name<<" "<<age<<endl;
    }
    void birthday(){
        age++;
    }
};

int main (){
    int age = 24;
    cout<<age<<endl;
    Person p1("Kartavya",age);
    p1.intro();
    p1.birthday();
    cout<<age<<endl;

    return 0;
}