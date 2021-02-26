#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    int age;

    Person(){
        age = 24;
    }

    void introduce(){
        cout<<age<<endl;
    }
};

int main(){
    Person *ptr = new Person();
    // ptr->introduce();

    // int age;
    int Person::*a_ptr = &Person::age;

    cout<<ptr->*a_ptr;
    return 0;
}