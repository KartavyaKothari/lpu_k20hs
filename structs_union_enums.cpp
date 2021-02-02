#include<bits/stdc++.h>
using namespace std;

struct Person{
    int age;
    char sex;
};

union Friend{
    int num;
    char c;
    char arr[4];
};

enum Weekday{
    Tues,
    Wed,
    Thrus,
    Fri = 100,
    Sat,
    Sun = 50,
    Mon
};

// int Mon = 0;
// int Tues = 1;
// .
// .
// .
// int Sun = 6;

int main(){
    // int day = Mon;
    // if(day<Tues){
    //     cout<<"The day is monday definately, ughhhhhh"<<endl;
    // }
    // cout<<Mon;

    // struct Person p;
    // p.age = 23;
    // p.sex = 'M';

    // cout<<p.age<<" "<<p.sex<<endl;

    union Friend f;
    f.num = 2;
    f.c = 'a';

    cout<<f.num<<" "<<f.c<<" "<<endl;

    return 0;
}