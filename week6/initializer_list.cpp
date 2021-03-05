#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string n, int a):name(n),age(a)
    {
        // name = n;
        // age = a;
    }
    void intro(){
        cout<<name<<" "<<age<<endl;
    }
};

int main (){
    Person p1("Kartavya",24);
    p1.intro();

    return 0;
}