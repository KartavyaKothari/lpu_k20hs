#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    int age;

    // printf("What is your name: ");
    cout<<"What is your name: ";

    // scanf("%s",name);
    cin>>name;

    cout<<"Please enter your age: ";
    cin>>age;

    if(age<18){
        cout<<"You are a kid "<<name<<", watch pogo"<<endl;
    }else{
        cout<<"Welcome to education hub, "<<name<<endl;
    }


    return 0;
}