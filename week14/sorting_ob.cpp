#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int age;
    int phone;
    int height;

    Student(int a, int b, int c, int d){
        this->roll = a;
        this->age = b;
        this->phone = c;
        this->height = d;
    }

    void display(){
        cout<<"H: "<<height<<", A: "<<age<<", P: "<<phone<<" R: "<<roll<<endl;
    }
};

bool cmp(Student a, Student b){
    return a.age<b.age;
}

int main(){
    vector<Student> arr;
    arr.push_back(Student(1,2,3,4));
    arr.push_back(Student(11,20,3,1));
    arr.push_back(Student(34,123,213,1));
    arr.push_back(Student(4,3,2,1));

    sort(arr.begin(), arr.end(),cmp);

    for(Student ele: arr){
        ele.display();
    }

    return 0;
}