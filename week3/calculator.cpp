#include<bits/stdc++.h>
using namespace std;

double add(double a, double b){
    return a+b;
}

double mul(double a, double b){
    return a*b;
}

double div(double a, double b){
    return a/b;
}

double sub(double a, double b){
    return a-b;
}

int main(){
    double num1, num2;
    char op;
    cout<<"Enter the expression: ";
    cin>>num1>>op>>num2;

    cout<<"Result = ";

    switch(op){
        case '+':
            cout<<add(num1,num2)<<endl;
            break;
        case '-':
            cout<<sub(num1,num2)<<endl;
            break;
        case '*':
            cout<<mul(num1,num2)<<endl;
            break;
        case '/':
            cout<<div(num1,num2)<<endl;
            break;
        case '^':
            cout<<pow(num1,num2)<<endl;
            break;
        default:
            cout<<op<<endl;
            break;
    }
}