#include<bits/stdc++.h>
using namespace std;

template <class MY_TYPE>
class Base{
    public:
    MY_TYPE arr[3];

    Base(MY_TYPE arr[]){
        this->arr[0] = arr[0];
        this->arr[1] = arr[1];
        this->arr[2] = arr[2];
    }

    MY_TYPE add(){
        return arr[0]+arr[1]+arr[2];
    }
};

template <class T>
class Derived: public Base<T>{
    public:
    Derived(T arr[]):Base<T>(arr){}
};

int main(){
    int arr[] = {1,2,3};
    string arr_s[] = {"Hello ","I hope ","It's clear."};
    Derived<string> d(arr_s);
    cout<<d.add()<<endl;
}