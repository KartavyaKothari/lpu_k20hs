#include<bits/stdc++.h>
using namespace std;

void division(double a, double b){
    if(b==0){
        string ERR = "Divide by zero is not possible, or is it? ...";
        throw ERR;
    }else{
        cout<<a/b<<endl;
    }
}

void func(double a, double b){
    try{
        division(a,b);
    }catch(string s){
        cout<<"Exception caught early in the cycle"<<endl;
    }
}

int main(){

    double a,b;
    cin>>a>>b;

    try{
        func(a,b);
    }catch(string err){
        cout<<err<<endl;
    }

    cout<<"And the program executed happily ever after"<<endl;

    return 0;
}